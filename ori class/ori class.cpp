#include <iostream>
#include<vector>
#include<fstream>
#include "Poet.h"
#include "Work.h"
using namespace std;
void sortPoets(vector<Poet>& poets)
{
    for (int i = 0; i < poets.size(); i++)
    {
        for (int j = 0; j < poets.size() - 1; j++)
        {
            if (poets[j].birth_date > poets[j + 1].birth_date)
            {
                swap(poets[j], poets[j + 1]);
            }
        }
    }
}
int main()
{
    ofstream fout("results.txt", fstream::app);
    ifstream fin("poets.txt");
    vector<Poet> poets;
    Work work; 
    Poet poet;

    for (int i = 0; i < 4; i++)
    {
        fin >> poet.fname >> poet.lname >> poet.birth_date >> poet.alive_or_not >>
            poet.death_date;
        fin >> work.name >> work.genre >> work.create_date >> work.release_date;
        poet.work = &work; 
        poets.push_back(poet);

    }
    sortPoets(poets);
    for (int i = 0; i < poets.size(); i++)
    {
        fout << "---------poeti--------" << endl; 
        poets[i].printPoet();
        fout << endl << "________________________________" << endl; 
    }
}

