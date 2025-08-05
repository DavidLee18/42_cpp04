#ifndef CUREMATERIA_H
#define CUREMATERIA_H

#include "AMateria.h"
#include "macros.def"

class CureMateria: public AMateria {
	public:
		DEF_OCF(CureMateria)
		AMateria* clone() const;
		void use(ICharacter&);
};

#endif
