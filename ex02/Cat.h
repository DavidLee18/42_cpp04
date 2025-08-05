#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat: public Animal {
	private:
		Brain* brain;
	public:
		DEF_OCF(Cat)
		void makeSound() const;
};

#endif
