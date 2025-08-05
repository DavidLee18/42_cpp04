#include "Brain.h"

Brain ::Brain() {
	for (size_t i = 0; i < 100; i++)
	{
		std::ostringstream oss("idea ");
		oss << i;
		ideas[i] = oss.str();
	}
	std ::cout << "Brain" << "()" << std ::endl;
}
Brain ::Brain(const Brain &other) {
	for (size_t i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std ::cout << "Brain" << "(const " << "Brain" << "&)" << std ::endl;
}
Brain &Brain ::operator=(const Brain &other) {
	for (size_t i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std ::cout << "Brain" << "::operator=(const " << "Brain" << "&)"
             << std ::endl;
  return *this;
}
Brain ::~Brain() { std ::cout << "~" << "Brain" << "()" << std ::endl; }
