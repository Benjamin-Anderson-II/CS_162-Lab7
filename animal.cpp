#include "animal.h"
#include <iostream>
using namespace std;

Animal::Animal(){
	species = UNDECLARED;
	age = 0;
	cost = 0;
	babies_to_make = 1;
	base_food_cost = 25;
}

Animal::Animal(int a){
	species = UNDECLARED;
	age = a;
	cost = 0;
	babies_to_make = 1;
	base_food_cost = 25;
}

void Animal::grow(){
	age+=1;
}

bool Animal::isBaby(){
	return (age<7)?true:false;
}

bool Animal::isAdult(){
	return (age>=104)?true:false;
}

int Animal::accrue_money(bool bonus){
	return (bonus)?0:cost*0.05;
}

int Animal::getFoodCost(){
	return base_food_cost;
}

int Animal::getCost(){
	return cost;
}

int Animal::getBabiesToMake(){
	return babies_to_make;
}

Type Animal::getSpecies(){
	return species;
}

int Animal::getAge(){
	return age;
}

void Animal::displayName(){
	cout << name << endl;
}

Animal::~Animal(){
	//cout << "Animal Destroyed\n";
}