#include "MateriaSource.h"

MateriaSource ::MateriaSource() {
    for (size_t i = 0; i < 4; i++)
        mats[i] = NULL;
  std ::cout << "MateriaSource" << "()" << std ::endl;
}
MateriaSource ::MateriaSource(MateriaSource &other) {
    for (size_t i = 0; i < 4; i++) {
        mats[i] = other.mats[i];
        other.mats[i] = NULL;
    }
  std ::cout << "MateriaSource" << "(const " << "MateriaSource" << "&)"
             << std ::endl;
}
MateriaSource &MateriaSource ::operator=(MateriaSource &other) {
    for (size_t i = 0; i < 4; i++) {
        mats[i] = other.mats[i];
        other.mats[i] = NULL;
    }
  std ::cout << "MateriaSource" << "::operator=(const " << "MateriaSource"
             << "&)" << std ::endl;
  return *this;
}
MateriaSource ::~MateriaSource() {
    for (size_t i = 0; i < 4; i++)
        delete mats[i];
  std ::cout << "~" << "MateriaSource" << "()" << std ::endl;
}
void MateriaSource::learnMateria(AMateria* mat) {
    for (size_t i = 0; i < 4; i++) {
        if (!mats[i] && mat) {
            mats[i] = mat;
            break;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const& type) {
    for (size_t i = 0; i < 4; i++) {
        if (mats[i] && mats[i]->getType() == type) {
            return mats[i];
        }
    }
    return NULL;
}
