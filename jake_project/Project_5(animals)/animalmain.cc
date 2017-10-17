/************************************************
	Jacob Mulligan	3/27/2017
	file: animalmain.cc
	This is the application file for the parent class animal.h that houses all the entered homes for the animals
	The animalmain.cc uses a menu to guide the customer through a selection process to pick the home they want
**************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "animal.h"
using namespace std;


int menu();



int main(){
	list<homestead*> home;
	homestead *tmpptr;


	ifstream fin;
	ofstream fout;
	fin.open("homestead.txt");
	if(fin.fail()){
		cout << "file failed to open";
	}
	else{
		string name;
		//cout << "what animal are you?" << endl;
		//fin>>name;
		while(!fin.eof()){
			fin>>name;
			//homestead* tmpptr;
			if(name == "Griffin"){
				tmpptr = new griffin;
				tmpptr->input(fin);
				home.push_back(tmpptr);
				
				
			}
			else if(name == "Unicorn"){
				tmpptr = new Unicorn;
				tmpptr->input(fin);
				home.push_back(tmpptr);
				
			}
			else if(name == "centaur"){
				tmpptr = new centaur;
				tmpptr->input(fin);
				home.push_back(tmpptr);
				
			}
			else if (name == "airbison"){
				tmpptr = new centaur;
				tmpptr->input(fin);
				home.push_back(tmpptr);
				
			}
			else if (name == "seabear"){
				tmpptr = new seabear;
				tmpptr->input(fin);
				home.push_back(tmpptr);
				
			}
			//tmpptr->input(fin);
			//home.push_back(tmpptr);
			fin >> name;
		}
	}
	
		fin.close();

		int choice = menu();
		while(choice != 0){
		
		
			//homestead* tmp;
			switch(choice){
				case 1: cout << "1: Select this option to see all houses";
					for(list<homestead*>::iterator it = home.begin(); it != home.end(); ++it){
						(*it)->output(cout);
						cout << endl;
					}
					break;
				case 2: cout << "2: Add a Griffin nest" << endl;
					tmpptr = new griffin;
					tmpptr->input(cin);
					home.push_back(tmpptr);
					tmpptr->output(cout);
					//home.push_back(tmp);
					break;
				case 3: cout << "3: Add a Unicorn stable" << endl;
					tmpptr = new Unicorn;
					tmpptr->input(cin);
					home.push_back(tmpptr);
					tmpptr->output(cout);
					break;
				case 4: cout << "4: Add a centaur stable" << endl;
					tmpptr = new centaur;
					tmpptr->input(cin);
					home.push_back(tmpptr);
					tmpptr->output(cout);
					break;
				case 5: cout << "5: Add an airbison temple" << endl;
					tmpptr = new airbison;
					tmpptr->input(cin);
					home.push_back(tmpptr);
					tmpptr->output(cout);
					break;
				case 6: cout << "6: Add a seabear cave" << endl;
					tmpptr = new seabear;
					tmpptr->input(cin);
					home.push_back(tmpptr);
					tmpptr->output(cout);
					break;
				case 0: cout << "0: Save and quit the program" << endl;
					
					break;

			}
			//tmp->input(cin);
			//home.push_back(tmp);
			choice = menu();
		}

		//fin.close();

		//ofstream fout;
		fout.open("homestead.txt");
		if(!fout.fail()){
			for(list<homestead*>::iterator it = home.begin(); it != home.end(); ++it){
				(*it)->output(fout);
			}
			cout << "You have saved your homes" << endl;
			fout.close();

		}
		else{
			cout << "you have failed to properly save your homes" << endl;
		}
	
	return 0;
}

int menu(){
	cout << "1: Select this option to see all houses"<< endl;
	cout << "2: Add a Griffin nest" << endl;
	cout << "3: Add a Unicorn stable" << endl;
	cout << "4: Add a centaur stable" << endl;
	cout << "5: Add an airbison temple" << endl;
	cout << "6: Add a seabear cave" << endl;
	cout << "0: Save and quit the program" << endl;
	int choice;
	cin >> choice;
	return choice;
}

