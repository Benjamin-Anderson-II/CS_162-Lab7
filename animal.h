#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

enum Type {UNDECLARED, MONKEY, SEAOTTER, MEERKAT};//ENUM containing all of them possible species

class Animal {
private:
	int age{};//The age of the animal
protected:
	std::string name;
	Type species{};//------The species of the animal
	int cost{};//----------The cost of the animal
	int babies_to_make{};//The number of children the animal can have at a time
	int base_food_cost{};//The base cost of food.
public:
	Animal();
	Animal(int a);

	void grow();
	virtual int accrue_money(bool bonus);
	virtual int getFoodCost();

	bool isBaby();
	bool isAdult();

	int getAge();
	int getCost();
	int getBabiesToMake();
	Type getSpecies();

	void displayName();

	virtual ~Animal();
};

#endif