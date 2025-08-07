#include "Vec.h"

Vec ::Vec() : ptr(NULL), cap(0), len(0) {
  std ::cout << "Vec" << "()" << std ::endl;
}
Vec ::Vec(const Vec &other)
    : ptr(new AMateria *[other.cap]), cap(other.cap), len(other.len) {
  for (size_t i = 0; i < other.len; i++)
    ptr[i] = other.ptr[i]->clone();
  std ::cout << "Vec" << "(const " << "Vec" << "&)" << std ::endl;
}
Vec &Vec ::operator=(const Vec &other) {
  clear();
  this->ptr = new AMateria *[other.cap];
  for (size_t i = 0; i < other.len; i++)
    ptr[i] = other.ptr[i]->clone();
  this->cap = other.cap;
  this->len = other.len;
  std ::cout << "Vec" << "::operator=(const " << "Vec" << "&)" << std ::endl;
  return *this;
}
Vec ::~Vec() {
  clear();
  std ::cout << "~" << "Vec" << "()" << std ::endl;
}
void Vec::add(const AMateria *mat) {
    if (len == cap) {
        if (cap == 0) {
            ptr = new AMateria*[1];
            cap = 1;
        }
        else {
            AMateria** new_ptr = new AMateria*[cap * 2];
            for (size_t i = 0; i < len; i++)
                new_ptr[i] = ptr[i];
            cap *= 2;
            delete[] ptr;
            ptr = new_ptr;
        }
    }
    ptr[len++] = (AMateria*)mat;
}
void Vec::clear() {
    if (!ptr) return;
    for (size_t i = 0; i < len; i++)
        delete ptr[i];
    delete[] ptr;
    ptr = NULL;
}
