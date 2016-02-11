#ifndef HUMAN_H
#define HUMAN_H
#include "creature.h"

class human: public creature
{
	
	public:
		human();
		human(int newstrength, int newhitpoints);
		/*int getDamage() ;*/
		std::string getSpecies() const;

};

#endif
