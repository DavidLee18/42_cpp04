#ifndef VEC_H
#define VEC_H

#include "AMateria.h"
#include "macros.def"

class Vec {
    private:
        AMateria** ptr;
        size_t cap;
        size_t len;
    public:
        DEF_OCF(Vec)
        void add(const AMateria*);
        void clear();
};

#endif
