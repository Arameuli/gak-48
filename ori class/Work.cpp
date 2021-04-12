#include "Work.h"
#include<fstream>
#include<iostream>
using namespace std;
Work::Work(){
}
Work::Work(string name, string genre, int create_date, int release_date)
{
	this->name = name; this->genre = genre;
	this->create_date = create_date; this->release_date = release_date;
}
Work::~Work(){

}
void Work::printWork()
{
	ofstream fout("results.txt", fstream::app);
	fout << "saxeli: " << name << "\t janri: " << genre << "\t sheqmnis tarigi: " << create_date <<
		"\t gamocemis tarigi: " << release_date << endl;
}