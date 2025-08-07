#include "Character.h"
#include "CureMateria.h"
#include "IceMateria.h"
#include "MateriaSource.h"

int main() {
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new IceMateria());
    src->learnMateria(new CureMateria());

    ICharacter *me = new Character("me");
    AMateria *tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->equip(src->createMateria("ice"));
    me->unequip(2);

    ICharacter *me2 = new Character(*(Character*)me);
    me->use(0, *me2);
    me->use(1, *me2);

    delete me2;
    delete me;
    delete src;

    return 0;
}
