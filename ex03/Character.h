#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"
#include "Vec.h"
#include "macros.def"

class Character : public ICharacter {
    private:
        Vec history;
        AMateria *slots[4];
        std::string name;

    public:
        DEF_OCF_(Character, const std::string&)
        std::string const &getName() const;
        void equip(AMateria*);
        void unequip(int);
        void use(int, ICharacter&);
};

#endif
