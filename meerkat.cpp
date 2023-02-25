#include "meerkat.h"
#include <iostream>
using namespace std;

Meerkat::Meerkat(){
	species = MEERKAT;
	cost = 500;
	babies_to_make = 3;
}

Meerkat::Meerkat(int a) : Animal{a}{
	species = MEERKAT;
	cost = 500;
	babies_to_make = 3;
}

Meerkat::Meerkat(string n){
	species = MEERKAT;
	cost = 500;
	babies_to_make = 3;
	name = n;
}

int Meerkat::getFoodCost(){
	return base_food_cost;
}

Meerkat::~Meerkat(){
	//cout << "A meerkat has died.\n";
}