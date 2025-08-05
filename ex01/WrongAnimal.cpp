#include "WrongAnimal.h"

IMPL_OCF(WrongAnimal, other, 0, type, "XXX")

void WrongAnimal::makeSound() const {
	std::cout << "Gwrrrrrrong..." << std::endl;
}

std::string const& WrongAnimal::getType() const { return type; }
