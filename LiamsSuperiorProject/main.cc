#include <list>
#include <iostream>
#include <string>
#include <fstream>
#include "home.h"

using namespace std;

int main(){
	list <Home*> orders;

	ifstream ins;
	ins.open("orders.txt");

	string type;
	ins >> type;

	while(!ins.eof())
	{
		Home *temp;
		if (type == "Serpopardhome")
		{
			temp = new Serpopardhome;
			temp->input(ins);
		}
		else if (type == "Chupacabrahome")
		{
			temp = new Chupacabrahome;
			temp->input(ins);
		}
		else if (type == "Catoblepashome")
		{
			temp = new Catoblepashome;
			temp->input(ins);
		}
		else if (type == "Crocottahome")
		{
			temp = new Crocottahome;
			temp->input(ins);
		}
		else if (type == "Jackalopehome")
		{
			temp = new Jackalopehome;
			temp->input(ins);
		}
		orders.push_back(temp);
		ins >> type;
	}

	ins.close();

	int choice;

	do
	{
		cout << "1. Order A Serpopard Home" << endl;
		cout << "2. Order A Chupacabra Home" << endl;
		cout << "3. Order A Catoblepas Home" << endl;
		cout << "4. Order A Crocotta Home" << endl;
		cout << "5. Order A Jackalope Home" << endl;
		cout << "6. Print Orders" << endl;
		cout << "7. Exit" << endl;

		cout << endl << "Enter Choice: ";
		cin >> choice;
		cout << endl;

		switch(choice)
		{
			case 1:
			{
				Home *temp;
				int pyr;
				int mce;
				int snrcks;
				cout << "Enter the number of pyramids you want in your home: ";
				cin >> pyr;
				cout << endl;
				cout << "Enter the number of mice you want in your home: ";
				cin >> mce;
				cout << endl;
				cout << "Enter the number of sunrocks you want in your home: ";
				cin >> snrcks;
				cout << endl << endl;

				temp = new Serpopardhome(pyr, mce, snrcks);
				orders.push_back(temp);

				cout << "Order confirmed" << endl << endl;

				break;
			}

			case 2:
			{
				Home *temp;
				int tmblweds;
				int gts;
				int snd;
				cout << "Enter the number of tumbleweeds you want in your home: ";
				cin >> tmblweds;
				cout << endl;
				cout << "Enter the number of goats you want in your home: ";
				cin >> gts;
				cout << endl;
				cout << "Enter the amount of sand you want in your home: ";
				cin >> snd;
				cout << endl << endl;

				temp = new Chupacabrahome(tmblweds, gts, snd);
				orders.push_back(temp);

				cout << "Order confirmed" << endl << endl;

				break;
			}

			case 3:
			{
				Home *temp;
				int mspatch;
				int swp;
				cout << "Enter the number of moss patches you want in your home: ";
				cin >> mspatch;
				cout << endl;
				cout << "Enter the amount of swamp you want in your home: ";
				cin >> swp;

				cout << endl << endl;

				temp = new Catoblepashome(mspatch, swp);
				orders.push_back(temp);

				cout << "Order confirmed" << endl << endl;

				break;
			}

			case 4:
			{
				Home *temp;
				int smlanimal;
				int tre;
				int bsh;
				cout << "Enter the number of small animals you want in your home: ";
				cin >> smlanimal;
				cout << endl;
				cout << "Enter the number of trees you want in your home: ";
				cin >> tre;
				cout << endl;
				cout << "Enter the number of bushes you want in your home: ";
				cin >> bsh;
				cout << endl << endl;

				temp = new Crocottahome(smlanimal, tre, bsh);
				orders.push_back(temp);

				cout << "Order confirmed" << endl << endl;

				break;
			}

			case 5:
			{
				Home *temp;
				int grs;
				int crts;
				int hles;
				cout << "Enter the amount of grass you want in your home: ";
				cin >> grs;
				cout << endl;
				cout << "Enter the number of carrots you want in your home: ";
				cin >> crts;
				cout << endl;
				cout << "Enter the number of holes you want in your home: ";
				cin >> hles;
				cout << endl << endl;

				temp = new Jackalopehome(grs, crts, hles);
				orders.push_back(temp);

				cout << "Order confirmed" << endl << endl;

				break;
			}

			case 6:
			{
				list <Home*>::iterator it = orders.begin();
				while(it != orders.end())
				{
					(*it)->print();
					++it;
					cout << endl;
				}

				break;
			}

			case 7:
			{
				ofstream outs;
				outs.open("orders.txt");
				list <Home*>::iterator it = orders.begin();
				while(it != orders.end())
				{
					(*it)->output(outs);
					++it;
				}

				break;
			}
		}
	} while (choice != 7);
}