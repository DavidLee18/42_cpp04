#include "AMateria.h"

AMateria::AMateria(std::string const& type): type(type) {
	std::cout << "AMateria()" << std::endl;
}

AMateria::AMateria(const AMateria& other): type(other.type) {
	std::cout << "AMateria(const AMateria&)" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "~AMateria()" << std::endl;
}

std::string const& AMateria::getType() const { return type; }
