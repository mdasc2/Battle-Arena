/* Andrew Chow, Cs 110b, Professor Harden 5/13/15 -5/14/15 */
#include <iostream>
#include "creature.h"
#include "demon.h"
#include "human.h"
#include "elf.h"
#include "cyberdemon.h"
#include "balrog.h"
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void battlearena(creature& gladiator1, creature& gladiator2);


int main() {
	srand(time(0));
	
	human h1;
	elf e1;
	cyberdemon c1;
	balrog b1;
	
	human h(20, 30);
	elf e(40, 50);
	cyberdemon c(60, 70);
	balrog b(80, 90);
	battlearena (h, e);
	battlearena (c ,b);
	battlearena (e ,b);
	battlearena (h, b);
	battlearena (c, e);

	
	cout << "default human strength/hitpoints: " << h1.getStrength() 
<< "/" << h1.getHitpoints() << endl;
	cout << "default elf strength/hitpoints: " << e1.getStrength() << "/" << e1.getHitpoints() << endl;
	cout << "default cyberdemon strength/hitpoints: " << 
c1.getStrength() << "/" << c1.getHitpoints() << endl;
	cout << "default balrog strength/hitpoints: " << b1.getStrength() 
<< "/" << b1.getHitpoints() << endl;
	cout << "non-default human strength/hitpoints: " << 
h.getStrength() << "/" << h.getHitpoints() << endl;
	cout << "non-default elf strength/hitpoints: " << e.getStrength() 
<< "/" << e.getHitpoints() << endl;
	cout << "non-default cyberdemon strength/hitpoints: " << 
c.getStrength() << "/" << c.getHitpoints() << endl;
	cout << "non-default balrog strength/hitpoints: " << 
b.getStrength() << "/" << b.getHitpoints() << endl;
	cout << endl << endl;

	cout << "Examples of " << h.getSpecies() << " damage: " << endl;
	for (int i = 0; i < 10; i++){
		int damage = h.getDamage();
		cout << " Total damage = " << damage << endl;
		cout << endl;
	}
	cout << endl;
	
	
	
	cout << "Examples of " << e.getSpecies() << " damage: " << endl;
	for (int i = 0; i < 10; i++){
		int damage = e.getDamage();
		cout << " Total damage = " << damage << endl;
		cout << endl;
	}
	cout << endl;
	
	
	
	cout << "Examples of " << c.getSpecies() << " damage: " << endl;
	for (int i = 0; i < 10; i++){
		int damage = c.getDamage();
		cout << " Total damage = " << damage << endl;
		cout << endl;
	}
	cout << endl;
	
	
	
	cout << "Examples of " << b.getSpecies() << " damage: " << endl;
	for (int i = 0; i < 10; i++){
		int damage = b.getDamage();
		cout << " Total damage = " << damage << endl;
		cout << endl;
	}
	cout << endl;
}

void battlearena(creature& gladiator1, creature& gladiator2)
{
	int gladiator1hitpoints = gladiator1.getHitpoints();
	int gladiator2hitpoints = gladiator2.getHitpoints();
	
	while(gladiator1hitpoints > 0 &&  gladiator2hitpoints > 0)
	{
		int gladiator1damage = gladiator1.getDamage();
		int gladiator2damage = gladiator2.getDamage();
		gladiator2hitpoints = (gladiator2hitpoints - gladiator1damage);
		gladiator1hitpoints = (gladiator1hitpoints - gladiator2damage);

		if (gladiator1hitpoints <= 0 && gladiator2hitpoints <= 0)
		{	
			cout << "Both fighters are down, What a fight! " << endl;
			cout << endl;
		}
		if (gladiator1hitpoints > 0 && gladiator2hitpoints <= 0)  
 		{	cout << gladiator1.getSpecies() << " HAS WON THE FIGHT, I DO NOT BELIEVE IT " << endl;
			cout << endl;
		}
		if (gladiator1hitpoints <= 0 && gladiator2hitpoints > 0)
		{	cout << gladiator2.getSpecies() << " HAS WON THE FIGHT, I DO NOT BELIEVE IT " << endl;
			cout << endl;
		}
	}

}



/*
The human attacks for 9 points!
The elf attacks for 39 points!
elf HAS WON THE FIGHT, I DO NOT BELIEVE IT 

The cyberdemon attacks for 18 points!
The balrog attacks for 32 points!
 The balrog's rampage does 65 damage! 
balrog HAS WON THE FIGHT, I DO NOT BELIEVE IT 

The elf attacks for 1 points!
 Arcane affinity inflicts 1 additional damage! 
The balrog attacks for 43 points!
 The balrog's rampage does 52 damage! 
balrog HAS WON THE FIGHT, I DO NOT BELIEVE IT 

The human attacks for 15 points!
The balrog attacks for 30 points!
 The balrog's rampage does 52 damage! 
balrog HAS WON THE FIGHT, I DO NOT BELIEVE IT 

The cyberdemon attacks for 30 points!
The elf attacks for 8 points!
 Arcane affinity inflicts 8 additional damage! 
The cyberdemon attacks for 43 points!
Demonic Rage inflicts 50 additional damage points ! 
The elf attacks for 12 points!
cyberdemon HAS WON THE FIGHT, I DO NOT BELIEVE IT 


default human strength/hitpoints: 10/10
default elf strength/hitpoints: 10/10
default cyberdemon strength/hitpoints: 10/10
default balrog strength/hitpoints: 10/10
non-default human strength/hitpoints: 20/30
non-default elf strength/hitpoints: 40/50
non-default cyberdemon strength/hitpoints: 60/70
non-default balrog strength/hitpoints: 80/90


Examples of human damage: 
 The human attacks for 5 points! 
 Total damage = 5

 The human attacks for 6 points! 
 Total damage = 6

 The human attacks for 6 points! 
 Total damage = 6

 The human attacks for 3 points! 
 Total damage = 3

 The human attacks for 16 points! 
 Total damage = 16

 The human attacks for 5 points! 
 Total damage = 5

 The human attacks for 3 points! 
 Total damage = 3

 The human attacks for 5 points! 
 Total damage = 5

 The human attacks for 20 points! 
 Total damage = 20

 The human attacks for 19 points! 
 Total damage = 19


Examples of elf damage: 
 The elf attacks for 2 points ! 
 Arcane affinity inflicts 2 additional damage! 
 Total damage = 4

 The elf attacks for 16 points ! 
 Arcane affinity inflicts 16 additional damage! 
 Total damage = 32

 The elf attacks for 13 points ! 
 Total damage = 13

 The elf attacks for 4 points ! 
 Total damage = 4

 The elf attacks for 33 points ! 
 Arcane affinity inflicts 33 additional damage! 
 Total damage = 66

 The elf attacks for 32 points ! 
 Arcane affinity inflicts 32 additional damage! 
 Total damage = 64

 The elf attacks for 7 points ! 
 Total damage = 7

 The elf attacks for 34 points ! 
 Total damage = 34

 The elf attacks for 24 points ! 
 Total damage = 24

 The elf attacks for 40 points ! 
 Arcane affinity inflicts 40 additional damage! 
 Total damage = 80


Examples of cyberdemon damage: 
 The cyberdemon attacks for 33 damage! 
 Total damage = 33

 The cyberdemon attacks for 49 damage! 
Demonic Rage inflicts 50 additional damage points ! 
 Total damage = 99

 The cyberdemon attacks for 39 damage! 
 Total damage = 39

 The cyberdemon attacks for 26 damage! 
Demonic Rage inflicts 50 additional damage points ! 
 Total damage = 76

 The cyberdemon attacks for 20 damage! 
Demonic Rage inflicts 50 additional damage points ! 
 Total damage = 70

 The cyberdemon attacks for 12 damage! 
 Total damage = 12

 The cyberdemon attacks for 9 damage! 
 Total damage = 9

 The cyberdemon attacks for 42 damage! 
 Total damage = 42

 The cyberdemon attacks for 43 damage! 
 Total damage = 43

 The cyberdemon attacks for 9 damage! 
 Total damage = 9


Examples of balrog damage: 
 The balrog attacks for 43 damage! 
 The balrog's rampage does 24 damage! 
 Total damage = 67

 The balrog attacks for 49 damage! 
Demonic Rage inflicts 50 additional damage points ! 
 The balrog's rampage does 57 damage! 
 Total damage = 156

 The balrog attacks for 8 damage! 
 The balrog's rampage does 45 damage! 
 Total damage = 53

 The balrog attacks for 48 damage! 
 The balrog's rampage does 29 damage! 
 Total damage = 77

 The balrog attacks for 76 damage! 
 The balrog's rampage does 71 damage! 
 Total damage = 147

 The balrog attacks for 54 damage! 
 The balrog's rampage does 36 damage! 
 Total damage = 90

 The balrog attacks for 27 damage! 
Demonic Rage inflicts 50 additional damage points ! 
 The balrog's rampage does 33 damage! 
 Total damage = 110

 The balrog attacks for 71 damage! 
 The balrog's rampage does 41 damage! 
 Total damage = 112

 The balrog attacks for 9 damage! 
 The balrog's rampage does 53 damage! 
 Total damage = 62

 The balrog attacks for 52 damage! 
 The balrog's rampage does 34 damage! 
 Total damage = 86

*/
