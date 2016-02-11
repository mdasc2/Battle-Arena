#ifndef DEMON_H
#define DEMON_H
#include "creature.h"

class demon : public creature
{
	
	public:
		demon();
		demon(int newstrength,int newhitpoints);
		int getDamage();
		std::string getSpecies() const;

};

#endif

