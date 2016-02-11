#include <iostream>
#include <ctime>
#include <cstdlib>
#include "creature.h"
#include "demon.h"
using namespace std;
 
demon::demon ()
:creature()
                
{               
}               

 
        
 

demon::demon( int newstrength, int newhitpoints)

:creature(newstrength, newhitpoints)

{
}       
        
        
        
        
                
string demon::getSpecies() const
{
	return "demon";
}
 




int demon::getDamage() 
{
	int damage = creature::getDamage();
	/*cout << "attacks for " << damage << " damage! " << endl;*/
	if ( rand()% 4 == 1 )
	{
		cout << "Demonic Rage inflicts 50 additional damage points ! " << endl;
		damage = (damage + 50);
	}
	return damage;
}
