#include "Poet.h"
#include<string>
#include<fstream>
#include<iostream>
using namespace std;

Poet::Poet(){
}
Poet::Poet(string fname, string lname, int birth_date, bool alive_or_not, int death_date, Work* work)
{
	this->fname = fname; this->lname = lname;
	this->birth_date = birth_date;  this->death_date = death_date;
	this->alive_or_not = alive_or_not;
	this->work = work;

}
Poet::~Poet(){
}
void Poet::printPoet()
{
	ofstream fout("results.txt", fstream::app);
	fout << "saxeli: " << fname << "\t gvari: " << lname << " \t dabadebis tarigi: " <<
		birth_date;
	if (alive_or_not == false)
	{
		fout << " \t gardacvlilia,  gardacvalebis tarigi: " << death_date << endl;
	}
	else {
		fout << " \t cocxalia " << endl;
	}
	fout << endl << "-----misi pirveli nawarmoebi-------" << endl;
	work->printWork();
}
