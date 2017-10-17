#include "home.h"
#include <iostream>
using namespace std;

void Home::input(istream & ins)
{
}

void Home::output(ostream& outs)const
{
}

void Home::print()const
{
}

Serpopardhome::Serpopardhome(int pyr, int mce, int snrcks)
{
	pyramids = pyr;
	mice = mce;
	sunrocks = snrcks;
}

void Serpopardhome::input(istream& ins)
{
	ins >> pyramids;
	ins >> mice;
	ins >> sunrocks;
}

void Serpopardhome::output(ostream& outs)const
{
	outs << "Serpopard Home" << endl;
	outs << pyramids << endl; 
	outs << mice << endl;
	outs << sunrocks << endl;
}

void Serpopardhome::print()const
{
	cout << endl;
	cout << "Serpopard Home" << endl;
	cout << "Pyramids: " << pyramids << endl;
	cout << "Mice: " << mice << endl;
	cout << "Sunrocks: " << sunrocks << endl; 
}

Chupacabrahome::Chupacabrahome(int tmblwds, int gts, int snd)
{
	tumbleweeds = tmblwds;
	goats = gts;
	sqftsand = snd;
}

void Chupacabrahome::input(istream& ins)
{
	ins >> tumbleweeds;
	ins >> goats;
	ins >> sqftsand;
}

void Chupacabrahome::output(ostream& outs)const
{
	outs << "Chupacabrahome" << endl;
	outs << tumbleweeds << endl;
	outs << goats << endl;
	outs << sqftsand << endl;
}

void Chupacabrahome::print()const
{
	cout << endl;
	cout << "Chupacabra Home" << endl;
	cout << "Tumbleweeds: " << tumbleweeds << endl;
	cout << "Goats: " << goats << endl;
	cout << "Square Feet Of Sand" << sqftsand << endl;
}

Catoblepashome::Catoblepashome(int mssptch, int swmp)
{
	mosspatches = mssptch;
	sqftswamp = swmp;
}

void Catoblepashome::input(istream& ins)
{
	ins >> mosspatches;
	ins >> sqftswamp;
}

void Catoblepashome::output(ostream& outs)const
{
	outs << "Catoblepashome" << endl;
	outs << mosspatches << endl;
	outs << sqftswamp << endl;
}

void Catoblepashome::print()const
{
	cout << endl;
	cout << "Catoblepas Home" << endl;
	cout << "Moss Patches: " << mosspatches << endl;
	cout << "Square Feet Of Swamp" << endl;
}

Crocottahome::Crocottahome(int smlaniml, int tres, int bush)
{
	smallanimals = smlaniml;
	trees = tres;
	bushes = bush;
}

void Crocottahome::input(istream& ins)
{
	ins >> smallanimals;
	ins >> trees;
	ins >> bushes;
}

void Crocottahome::output(ostream& outs)const
{
	outs << "Crocottahome" << endl;
	outs << smallanimals << endl;
	outs << trees << endl;
	outs << bushes << endl;
}

void Crocottahome::print()const
{
	cout << endl;
	cout << "Crocotta Home" << endl;
	cout << "Small Animals: " << smallanimals << endl;
	cout << "Trees: " << trees << endl;
	cout << "Bushes: " << bushes << endl;
}

Jackalopehome::Jackalopehome(int grs, int crts, int hles)
{
	grass = grs;
	carrots = crts;
	holes = hles;
}

void Jackalopehome::input(istream& ins)
{
	ins >> grass;
	ins >> carrots;
	ins >> holes;
}

void Jackalopehome::output(ostream& outs)const
{
	outs << "Jackalopehome" << endl;
	outs << grass << endl;
	outs << carrots << endl;
	outs << holes << endl;
}

void Jackalopehome::print()const
{
	cout << endl;
	cout << "Jackalope Home" << endl;
	cout << "Grass: " << grass << endl;
	cout << "Carrots: " << carrots << endl;
	cout << "Holes: " << holes << endl;
}