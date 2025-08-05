#include "Dog.h"
#include "Cat.h"

int main() {
	Animal* animals[6];
	for (size_t i = 0; i < 2; i++)
		animals[i] = new Dog();
	animals[2] = new Dog(*(Dog*)animals[1]);
	for (size_t i = 0; i < 2; i++)
		animals[i + 3] = new Cat();
	animals[5] = new Cat(*(Cat*)animals[4]);

	for (size_t i = 0; i < 6; i++)
		delete animals[i];
	return 0;
}
