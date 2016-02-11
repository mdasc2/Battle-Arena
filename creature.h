#ifndef CREATURE_H
#define CREATURE_H
#include <string>

class creature
{
	private:
		int hitpoints;
		int strength;
	public:
		creature();
		creature(int newstrength, int newhitpoints);
		virtual std::string getSpecies() const = 0;
		int getHitpoints() ;
		int getStrength() ;
		virtual int getDamage() ;
		void setHitpoints(int newhitpoints);
		void setStrength(int newstrength);			
};

#endif
