#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal {
	public:
		DEF_OCF(WrongCat)
		void makeSound() const;
};

#endif
