#include <vector>
#include <iostream>
#include "animal.h"
#include "meerkat.h"
using namespace std;

int main(int argc, char const *argv[])
{
	Meerkat mk1("Emma");
	Meerkat mk2("Liam");
	Meerkat mk3("Oliver");
	Meerkat mk4("James");

	vector<Meerkat> den;

	den.push_back(mk1);
	den.push_back(mk2);
	den.push_back(mk3);
	den.push_back(mk4);

	cout << den.size() << endl;
	den.front().displayName();

	den[2].displayName();
	den.at(2).displayName();

	cout << endl;

	vector<Meerkat> betterDen;
	betterDen = den;
	for(int i = 0; i < betterDen.size(); i++){
		betterDen[i].displayName();
	}


	try{
		den.at(7);
	} catch(...){
		cout << "Out of bounds\n";
	}
	return 0;
}