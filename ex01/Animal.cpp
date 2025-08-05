#include "Animal.h"

IMPL_OCF(Animal, other, 0, type, "???")

void Animal::makeSound() const {
	std::cout << "Grrrrrr..." << std::endl;
}

std::string const& Animal::getType() const { return type; }
