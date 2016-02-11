#include <iostream>
#include <cstdlib>
#include <ctime>
#include "creature.h"
using namespace std;



creature::creature()
{
	hitpoints = 10;
	strength = 10;
	srand(time(0));
}





creature::creature(int newstrength, int newhitpoints)
{
	hitpoints = newhitpoints;
	strength = newstrength;
	srand(time(0));
}






void creature::setHitpoints(int newhitpoints) 
{
	hitpoints = newhitpoints;
}






void creature::setStrength (int newstrength) 
{
	strength = newstrength;
}





int creature::getHitpoints ()
{
	return hitpoints;
}





int creature::getStrength ()
{
	return strength;
}




/*
string creature::getSpecies() const 
{
	return "creature";
}
*/




int creature::getDamage()
{
	int damage;
	damage = ((rand() % strength) + 1);
	cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
	return damage;
}
