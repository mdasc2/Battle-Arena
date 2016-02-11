#ifndef ELF_H
#define ELF_H
#include "creature.h"

class elf : public creature
{
        public:
                elf();
                elf(int newstrength,int newhitpoints);
                int getDamage();
                std::string getSpecies() const;

};

#endif

