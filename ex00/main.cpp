#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* weta = new WrongAnimal();
	const WrongAnimal* kat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << weta->getType() << " " << std::endl;
	std::cout << kat->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	weta->makeSound();
	kat->makeSound();

	delete i;
	delete j;
	delete meta;
	delete weta;
	delete kat;

	return 0;
}
