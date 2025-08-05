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

    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}
