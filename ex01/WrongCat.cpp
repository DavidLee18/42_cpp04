#include "WrongCat.h"

WrongCat ::WrongCat() {
  this->type = "XXXCATXXX";
  std ::cout << "WrongCat" << "()" << std ::endl;
}
WrongCat ::WrongCat(const WrongCat &other) {
  this->type = other.type;
  std ::cout << "WrongCat" << "(const " << "WrongCat" << "&)" << std ::endl;
}
WrongCat &WrongCat ::operator=(const WrongCat &other) {
  this->type = other.type;
  std ::cout << "WrongCat" << "::operator=(const " << "WrongCat" << "&)"
             << std ::endl;
  return *this;
}
WrongCat ::~WrongCat() {
  std ::cout << "~" << "WrongCat" << "()" << std ::endl;
}
void WrongCat::makeSound() const {
	std::cout << "Meowrong, Meowrong~" << std::endl;
}
