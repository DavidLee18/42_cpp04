#include "Character.h"

Character ::Character(std ::string const &name) : name(name) {
  for (size_t i = 0; i < 4; i++)
    slots[i] = NULL;
  std ::cout << "Character" << "(" << "std::string const& name" << ")"
             << std ::endl;
}
Character ::Character(Character &other) : name(other.name) {
  for (size_t i = 0; i < 4; i++) {
    slots[i] = other.slots[i];
    other.slots[i] = NULL;
  }
  std ::cout << "Character" << "(const " << "Character" << "&)" << std ::endl;
}
Character &Character ::operator=(Character &other) {
  this->name = other.name;
  for (size_t i = 0; i < 4; i++) {
    slots[i] = other.slots[i];
    other.slots[i] = NULL;
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
