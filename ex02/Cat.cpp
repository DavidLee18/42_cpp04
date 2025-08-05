#include "Cat.h"

Cat ::Cat() {
	type = "Cat";
	brain = new Brain();
	std ::cout << "Cat" << "()" << std ::endl;
}
Cat ::Cat(const Cat &other): Animal(other) {
  brain = new Brain(*other.brain);
  std ::cout << "Cat" << "(const " << "Cat" << "&)" << std ::endl;
}
Cat &Cat ::operator=(const Cat &other) {
  this->type = other.type;
  *brain = *other.brain;
  std ::cout << "Cat" << "::operator=(const " << "Cat" << "&)" << std ::endl;
  return *this;
}
Cat ::~Cat() {
	delete brain;
	std ::cout << "~" << "Cat" << "()" << std ::endl;
}
void Cat::makeSound() const {
	std::cout << "Meow, Meow~" << std::endl;
}
