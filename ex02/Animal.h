#ifndef ANIMAL_H
#define ANIMAL_H

#include "macros.def"
#include <string>
#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
          Animal();
          Animal(const Animal &);
          Animal &operator=(const Animal &);
          virtual ~Animal();
          virtual void makeSound() const = 0;
          std::string const &getType() const;
};

#endif
