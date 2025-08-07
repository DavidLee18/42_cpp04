#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.h"
#include "macros.def"

class MateriaSource: public IMateriaSource {
    private:
        AMateria* mats[4];
    public:
      DEF_OCF(MateriaSource)
      void learnMateria(AMateria *);
      AMateria *createMateria(std::string const &);
};

#endif
