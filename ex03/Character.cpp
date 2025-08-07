#include "Character.h"

Character ::Character(std ::string const &name) : history(), name(name) {
  for (size_t i = 0; i < 4; i++)
    slots[i] = NULL;
  std ::cout << "Character" << "(" << "std::string const& name" << ")"
             << std ::endl;
}
Character ::Character(const Character &other) : history(), name(other.name) {
    for (size_t i = 0; i < 4; i++) {
        if (other.slots[i]) {
            AMateria* cloned = other.slots[i]->clone();
            slots[i] = cloned;
            history.add(cloned);
        } else {
            slots[i] = NULL;
        }
    }
  std ::cout << "Character" << "(const " << "Character" << "&)" << std ::endl;
}
Character &Character ::operator=(const Character &other) {
  this->history.clear();
  this->name = other.name;
  for (size_t i = 0; i < 4; i++) {
      if (other.slots[i]) {
          AMateria* cloned = other.slots[i]->clone();
          slots[i] = cloned;
          history.add(cloned);
      } else {
          slots[i] = NULL;
      }
  }
  std ::cout << "Character" << "::operator=(const " << "Character" << "&)"
             << std ::endl;
  return *this;
}
Character ::~Character() {
  std ::cout << "~" << "Character" << "()" << std ::endl;
}
std::string const &Character::getName() const { return name; }
void Character::equip(AMateria *m) {
  for (size_t i = 0; i < 4; i++) {
    if (!slots[i] && m) {
      slots[i] = m;
      history.add(m);
      return;
    }
  }
}
void Character::unequip(int idx) {
  if (idx >= 0 && idx < 4 && slots[idx]) {
    slots[idx] = NULL;
  }
}
void Character::use(int idx, ICharacter &target) {
  if (idx >= 0 && idx < 4 && slots[idx]) {
    slots[idx]->use(target);
  }
}
