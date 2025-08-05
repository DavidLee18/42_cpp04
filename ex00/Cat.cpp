#include "Cat.h"

Cat ::Cat() {
	type = "Cat";
	std ::cout << "Cat" << "()" << std ::endl;
}
Cat ::Cat(const Cat &other): Animal(other) {
  std ::cout << "Cat" << "(const " << "Cat" << "&)" << std ::endl;
}
Cat &Cat ::operator=(const Cat &other) {
  this->type = other.type;
  std ::cout << "Cat" << "::operator=(const " << "Cat" << "&)" << std ::endl;
  return *this;
}
Cat ::~Cat() { std ::cout << "~" << "Cat" << "()" << std ::endl; }
void Cat::makeSound() const {
	std::cout << "Meow, Meow~" << std::endl;
}
