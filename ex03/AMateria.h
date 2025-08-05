#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include <iostream>

class ICharacter;

class AMateria {
	protected:
		const std::string type;
	public:
		AMateria(std::string const&);
		AMateria(const AMateria&);
		virtual ~AMateria();
		std::string const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter&) = 0;
};

#include "ICharacter.h"

#endif
