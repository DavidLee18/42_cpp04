#ifndef BRAIN_H
#define BRAIN_H

#include "macros.def"
#include <string>
#include <iostream>
#include <sstream>

class Brain {
	private:
		std::string ideas[100];
	public:
		DEF_OCF(Brain)
};

#endif
