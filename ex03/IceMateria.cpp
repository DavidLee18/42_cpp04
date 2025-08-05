#include "IceMateria.h"

IceMateria ::IceMateria() : AMateria("ice") {
  std ::cout << "IceMateria" << "()" << std ::endl;
}
IceMateria ::IceMateria(const IceMateria &other) : AMateria(other) {
  std ::cout << "IceMateria" << "(const " << "IceMateria" << "&)" << std ::endl;
}
IceMateria &IceMateria ::operator=(const IceMateria &other) {
  (void)other;
  std ::cout << "IceMateria" << "::operator=(const " << "IceMateria" << "&)"
             << std ::endl;
  return *this;
}
IceMateria ::~IceMateria() {
  std ::cout << "~" << "IceMateria" << "()" << std ::endl;
}
void IceMateria::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
AMateria* IceMateria::clone() const {
	return new IceMateria(*this);
}
