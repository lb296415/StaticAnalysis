/************************************************
	Jacob Mulligan	3/27/2017
	file: animal.cc
	This is the implementation file for the member funcitons of the parent and child classes of animal.h
**************************************************/

#include "animal.h"
using namespace std;

/*Griffin::Griffin(bool treegrnd = false, int eggs = 0){
	treeorground = treegrnd;
	golden_eggs = eggs;
}*/

void griffin::input(istream& ins){
	if(&ins == &cin){
		cout << "Would you like your nest to be in a tree or on the ground? t/g?" << endl;
	
		char choice;
		cin >> choice;
		bool done = false;
		while(!done){
			if(choice == 't'){
				treeorground = true;
				done = true;
			}
			else if(choice == 'g'){
				treeorground = false;
				done = true;
			}
		}
	
		cout << "How many eggs should your nest need to fit?"<< endl;
		cin >> golden_eggs;
	}
	else{
		ins >> treeorground;
		ins >>golden_eggs;
	}

}

void griffin::output(ostream& outs){
	if(&outs == &cout){	
		outs << "You have selected Griffin" << endl;

		outs << "You want your nest to be in/on: ";

		if(treeorground == true){
			outs << "tree" << endl;
		}
		else if(treeorground == false){
			outs << "ground" << endl;
		}

		outs << "the golden egg capacity should be: ";
		outs << golden_eggs << endl;
	}
	else{
		outs << "Griffin"<< endl;
		outs << treeorground << endl;
		outs << golden_eggs << endl;	
	}	
}

/*Unicorn::Unicorn(int rainbails = 0, int stablesize = 0){
	rainbowbails = rainbails;
	size_of_stable = stablesize;
}*/

void Unicorn::input(istream& ins){
	if(&ins == &cin){
		cout << "How many bails of rainbow hay should the house stable hold?"<< endl;
		cin >> rainbowbails;

		cout << "How many square feet should your stable be?" << endl;
		cin >> size_of_stable;
	}
	else{
		ins >> rainbowbails;
		ins >> size_of_stable;
	}
}

void Unicorn::output(ostream& outs){
	if(&outs == &cout){
		outs << "you have selected Unicorn" << endl;
		outs << "You have requested " << rainbowbails << " bails of rainbow hay" << endl;
		outs << "You want your stable to be " << size_of_stable << " square feet" << endl;
	}
	else{
		outs << "Unicorn"<<endl;
		outs << rainbowbails << endl;
		outs << size_of_stable << endl;
	}
}

/*centaur::centaur(bool shoerack = false, bool arr_rack = false, int arr_cap = 0){
	horseshoe_rack = shoerack;
	rack_color = rack;
	arrow_rack = arr_rack;
	arrow_capacity = arr_cap;
}*/

void centaur::input(istream& ins){
	if(&ins == &cin){
		cout << "Would you like an horse shoe rack in your house? y/n?" << endl;
	

		char choice, choice2;
		cin >> choice;
		bool done = false;
		while(!done){
			if(choice == 'y'){
				horseshoe_rack = true;
				done = true;
			}
			else if(choice == 'n'){
				horseshoe_rack = false;
				done = true;
			}
		}

		cout << "Would you like a arrow_rack? y/n?"<< endl;
	
		cin >> choice2;
		bool done2 = false;
		while(!done2){
			if(choice2 == 'y'){
				arrow_rack = true;
				done2 = true;
			}
			else if(choice2 == 'n'){
				arrow_rack = false;
				done2 = true;
			}
		}
	
		if(arrow_rack == true){
			
			cout << "What would the capacity of your arrow rack?"<< endl;
			cin >> arrow_capacity;
			cout << "What color would you like your arrow rack to be?" << endl;
			cin >> rack_color;
		
		}
	}
	else{
		ins >> horseshoe_rack;
		ins >> arrow_rack;
		ins >> arrow_capacity;
		ins >> rack_color;
	}
	
}

void centaur::output(ostream& outs){
	if(&outs == &cout){
		outs << "You have selected a Centaur" <<endl;
		
		
		if(horseshoe_rack == true){
			outs << "You have requested a shoe rack be in your home" << endl;
		}
		else if(horseshoe_rack == false){
			outs << "You don't want a horseshoe rack and will just leave them where ever they fall in your home" << endl;
		}

		if(arrow_rack == true){
			outs << "you have requested an arrow rack in your house" << endl;
			outs << "The capacity of the arrow rack is: " << arrow_capacity << endl;
			outs << "The color you have selected will be: "<< rack_color << endl;
		}
		else if(arrow_rack == false){
			outs << "You are a peaceful Centaur and do not want any arrows in your home"<< endl;
		}
	}
	else{
		outs << "Centaur"<< endl;
		outs << horseshoe_rack << endl;
		outs << arrow_rack << endl;
		outs << arrow_capacity << endl;
		outs << rack_color << endl;
	}
}

/*airbison::airbison(int temple = 0, int veggies = 0){
	size_of_temple = temple;
	veggietons = veggies;
}*/

void airbison::input(istream& ins){
	if(&ins == &cin){
		cout << "What is the square feet of your temple?" << endl;
		cin >> size_of_temple;
		cout << "How many tons of veggies will you need to store?" << endl;
		cin >> veggietons;
	}
	else{
		ins >> size_of_temple;
		ins >> veggietons;
	}
}

void airbison::output(ostream& outs){
	if(&outs == &cout){
		outs << "You have selected air bison" << endl;
		outs << "you have requested your temple to be " << size_of_temple << "square feet"<< endl;
		outs << "you have requested that your temple should be able to hold " << veggietons << "tons of vegatables"<< endl;
	}
	else{
		outs << "airbison"<<endl;
		outs << size_of_temple << endl;
		outs << veggietons << endl;
	}
}

/*seabear::seabear(bool circles = false, bool squids = false){
	bear_circles = circles;
	squidwards = squids;
}*/

void seabear::input(istream& ins){
	if(&ins == &cin){
		cout << "Would you like to have circles in your cave? y/n" << endl;
	
		char choice, choice2;
		ins >> choice;
		bool done = false;
		while(!done){
			if(choice == 'y'){
				bear_circles = true;
				done = true;
			}
			else if(choice == 'n'){
				bear_circles = false;
				done = true;
			}
		}
		cout << "would you like to have a squidward to harass? y/n?" << endl;
		
		bool done2 = false;
		ins >> choice2;
		while(!done2){
			if(choice2 == 'y'){
				squidwards = true;
				done2 = true;
			}
			else if(choice2 == 'n'){
				squidwards = false;
				done2 = true;
			}
		}
	}
	else{
		ins >> bear_circles;
		ins >> squidwards;
	}	
}


void seabear::output(ostream& outs){
	if(&outs == &cout){
		outs << "You have selected SeaBear" <<endl;
		
		
		if(bear_circles == true){
			outs << "You have requested that your cave have circles in it" << endl;
		}
		else if(bear_circles == false){
			outs << "You have made it clear that you don't want cirlces in your cave" << endl;
		}


		
		if(squidwards == true){
			outs << "You have requested that your cave have a squidward to harass" << endl;
		}
		else if(squidwards == false){
			outs << "I guess you're tired and sick of messing with squidward" << endl;
		}
	}
	else{
		outs << "SeaBear" << endl;
		outs << bear_circles<< endl;
		outs << squidwards <<endl;
	}
}
