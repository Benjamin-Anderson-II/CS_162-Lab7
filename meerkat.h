#ifndef MEERKAT_H
#define MEERKAT_H

#include "animal.h"

class Meerkat : public Animal {
public:
	Meerkat();
	Meerkat(int a);
	Meerkat(std::string n);
	int getFoodCost();
	~Meerkat();
};

#endif