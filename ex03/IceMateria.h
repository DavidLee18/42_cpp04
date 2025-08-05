#ifndef ICEMATERIA_H
#define ICEMATERIA_H

#include "AMateria.h"
#include "macros.def"

class IceMateria: public AMateria {
	public:
		DEF_OCF(IceMateria)
		AMateria* clone() const;
		void use(ICharacter&);
};

#endif
