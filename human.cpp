#include <iostream>
#include <ctime>
#include <cstdlib>
#include "creature.h"
#include "human.h"
using namespace std;

human::human ()
:creature()
{

}





human::human( int newstrength, int newhitpoints)
:creature(newstrength, newhitpoints)

{
}





string human :: getSpecies() const
{
	return "human";
}




/*
int human :: getDamage() 
{
	int damage = creature::getDamage();
	cout << " The human attacks for " << damage << " points! " << endl;
	return damage;
}


*/
