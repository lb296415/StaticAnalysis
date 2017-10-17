#include <iostream>

#ifndef HOME_H
#define HOME_H

class Home
{
public:
	virtual void input(std::istream& ins);
	virtual void output(std::ostream& outs)const;
	virtual void print()const;	
};

class Serpopardhome : public Home
{
public:
	Serpopardhome(int pyr = 0, int mce = 0, int snrcks = 0);
	void input(std::istream& ins);
	void output(std::ostream& outs)const;
	void print()const;
private:
	int pyramids;
	int mice;
	int sunrocks;
};

class Chupacabrahome : public Home
{
public:
	Chupacabrahome(int tmblwds = 0, int gts = 0, int snd = 0);
	void input(std::istream& ins);
	void output(std::ostream& outs)const;
	void print()const;
private:
	int tumbleweeds;
	int goats;
	int sqftsand;
};

class Catoblepashome : public Home
{
public:
	Catoblepashome(int mssptch = 0, int swmp = 0);
	void input(std::istream& ins);
	void output(std::ostream& outs)const;
	void print()const;
private:
	int mosspatches;
	int sqftswamp;	
};

class Crocottahome : public Home
{
public:
	Crocottahome(int smlaniml = 0, int tres = 0, int bush = 0);
	void input(std::istream& ins);
	void output(std::ostream& outs)const;
	void print()const;
private:
	int smallanimals;
	int trees;
	int bushes;	
};

class Jackalopehome : public Home
{
public:
	Jackalopehome(int grs = 0, int crts = 0, int hles = 0);
	void input(std::istream& ins);
	void output(std::ostream& outs)const;
	void print()const;
private:
	int grass;
	int carrots;
	int holes;
};

#endif