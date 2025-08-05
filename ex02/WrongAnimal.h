#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include "macros.def"
#include <string>
#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
          WrongAnimal();
          WrongAnimal(const WrongAnimal &);
          WrongAnimal &operator=(const WrongAnimal &);
          virtual ~WrongAnimal();
          virtual void makeSound() const;
          std::string const &getType() const;
};

#endif
