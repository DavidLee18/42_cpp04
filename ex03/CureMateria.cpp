#include "CureMateria.h"

CureMateria ::CureMateria() : AMateria("cure") {
  std ::cout << "CureMateria" << "()" << std ::endl;
}
CureMateria ::CureMateria(const CureMateria &other) : AMateria(other) {
  std ::cout << "CureMateria" << "(const " << "CureMateria" << "&)"
             << std ::endl;
}
CureMateria &CureMateria ::operator=(const CureMateria &other) {
  (void)other;
  std ::cout << "CureMateria" << "::operator=(const " << "CureMateria" << "&)"
             << std ::endl;
  return *this;
}
CureMateria ::~CureMateria() {
  std ::cout << "~" << "CureMateria" << "()" << std ::endl;
}
void CureMateria::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
AMateria* CureMateria::clone() const {
	return new CureMateria(*this);
}
