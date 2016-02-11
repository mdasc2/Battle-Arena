#include <iostream>
#include <ctime>
#include <cstdlib>
#include "balrog.h"
#include "demon.h"
using namespace std;

balrog::balrog ()

:demon()
{
}





balrog::balrog( int newstrength, int newhitpoints)

:demon(newstrength, newhitpoints)

{
}





string balrog::getSpecies() const
{
	return "balrog";
}





int balrog::getDamage()
{
	/*cout << " The balrog ";*/
	int damage = demon::getDamage();
	int rampage = ((rand() % balrog::getStrength()) + 1);
	cout << " The balrog's rampage does " << rampage << " damage! " << endl;
	damage = (damage + rampage);

	return damage;
}

