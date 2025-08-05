#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"
#include "macros.def"

class Character : public ICharacter {
    private:
        AMateria *slots[4];
        std::string name;

    public:
        Character(std ::string const &);
        Character(Character &);
        Character &operator=(Character &);
        ~Character();
        std::string const &getName() const;
        void equip(AMateria*);
        void unequip(int);
        void use(int, ICharacter&);
};

#endif
