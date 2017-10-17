/************************************************
	Jacob Mulligan	3/27/2017
	file: animal.h
	This is the header file for the parent class in animal.h and its child classes
**************************************************/
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <list>
#include <fstream>
#include <string>

class homestead{
public:
	virtual void input(std::istream& ins) = 0;
	virtual void output(std::ostream& outs) = 0;
};

class griffin:public homestead{
public:
	griffin(bool treegrnd = false, int eggs = 0){treeorground = treegrnd; golden_eggs = eggs;}
	void input(std::istream& ins);
	void output(std::ostream& outs);

private:
	bool treeorground;
	int golden_eggs;
};

class Unicorn:public homestead{
public:
	Unicorn(int rainbails = 0, int stablesize = 0){rainbowbails = rainbails; size_of_stable = stablesize;}
	void input(std::istream& ins);
	void output(std::ostream& outs);
private:
	int rainbowbails;
	int size_of_stable;

};

class centaur:public homestead{
public:
	centaur(bool shoerack=false, bool arr_rack =false, std::string rack = "", int arr_cap = 0)
		{horseshoe_rack = shoerack; arrow_rack = arr_rack; rack_color = rack; arrow_capacity = arr_cap;}
	void input(std::istream& ins);
	void output(std::ostream& outs);

private:
	bool horseshoe_rack;
	bool arrow_rack;
	std::string rack_color;
	int arrow_capacity;

};

class airbison:public homestead{
public:
	airbison(int temple = 0, int veggies = 0){size_of_temple = temple; veggietons = veggies;}
	void input(std::istream& ins);
	void output(std::ostream& outs);

private:
	int size_of_temple;
	int veggietons;
};

class seabear:public homestead{
public:
	seabear(bool circles = false, bool squids = false){bear_circles = circles; squidwards = squids;}
	void input(std::istream& ins);
	void output(std::ostream& outs);

private:
	bool bear_circles;
	bool squidwards;
};

#endif