#include <iostream>
#include <ctime>
#include <cstdlib>
#include "creature.h"
#include "elf.h"
using namespace std;

elf::elf ()
:creature()

{
}





elf::elf( int newstrength, int newhitpoints)

:creature(newstrength, newhitpoints)

{
}





string elf::getSpecies() const
{
	return "elf";
}





int elf:: getDamage() 
{
	int damage = creature::getDamage();
	int magic = ( rand()% 10 +1 );
	/*cout << " The elf attacks for " << damage << " points ! " << endl;*/
	if (magic <= 5)
	{
		cout << " Arcane affinity inflicts "<< damage << " additional damage! " << endl;
		damage = (damage * 2);
	}
	return damage;
}

