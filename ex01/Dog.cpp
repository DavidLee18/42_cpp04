#include "Dog.h"

Dog ::Dog() {
	type = "Dog";
	brain = new Brain();
	std ::cout << "Dog" << "()" << std ::endl;
}
Dog ::Dog(const Dog &other) {
  this->type = other.type;
  brain = new Brain(*other.brain);
  std ::cout << "Dog" << "(const " << "Dog" << "&)" << std ::endl;
}
Dog &Dog ::operator=(const Dog &other) {
  this->type = other.type;
  *brain = *other.brain;
  std ::cout << "Dog" << "::operator=(const " << "Dog" << "&)" << std ::endl;
  return *this;
}
Dog ::~Dog() {
	delete brain;
	std ::cout << "~" << "Dog" << "()" << std ::endl;
}
void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}
