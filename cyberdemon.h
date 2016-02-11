#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "demon.h"
#include <string>

class cyberdemon : public demon
{
        public:
                cyberdemon();
                cyberdemon(int newstrength,int newhitpoints);
                /*int getDamage();*/
                std::string getSpecies() const;

};

#endif

