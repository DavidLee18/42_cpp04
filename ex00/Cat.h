#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat: public Animal {
	public:
		DEF_OCF(Cat)
		void makeSound() const;
};

#endif
