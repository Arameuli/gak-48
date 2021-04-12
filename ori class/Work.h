#pragma once
#include<string>
using namespace std;
class Work
{
public:
	string name, genre;
	int create_date, release_date;
	Work();
	Work(string name, string genre, int create_date, int release_date);
	~Work();
	void printWork();
};

