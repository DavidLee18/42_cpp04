#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog: public Animal {
	public:
		DEF_OCF(Dog)
		void makeSound() const;
};

#endif
