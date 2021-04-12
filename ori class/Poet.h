#pragma once
#include "Work.h"
#include<string>
using namespace std;
class Poet
{
public:
	string fname, lname;
	int birth_date, death_date;
	bool alive_or_not;
	Work* work;
	Poet();
	Poet(string fname, string lname, int birth_date, bool alive_or_not, int death_date, Work* work);
	~Poet();
	void printPoet();
};

