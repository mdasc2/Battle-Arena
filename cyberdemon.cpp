#include <iostream>
#include <ctime>
#include <cstdlib>
#include "cyberdemon.h"
#include "demon.h"
using namespace std;

cyberdemon::cyberdemon ()
:demon()

{
}





cyberdemon::cyberdemon( int newstrength, int newhitpoints)

:demon(newstrength, newhitpoints)

{
}





string cyberdemon::getSpecies() const
{
	return "cyberdemon";
}



/*
int cyberdemon::getDamage()
{
	cout << " The cyberdemon ";	
	int damage = demon::getDamage();
	return damage;
}
*/
