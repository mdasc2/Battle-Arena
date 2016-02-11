#ifndef BALROG_H
#define BALROG_H
#include "demon.h"

class balrog : public demon
{
        public:
                balrog();
                balrog(int newstrength,int newhitpoints);
                int getDamage();
                std::string getSpecies() const;

};

#endif


