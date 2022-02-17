#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	//added code
	delete meta;
	delete i;
	delete j;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << wrong_animal->getType() << " " << std::endl;
	wrong_animal->makeSound();
	std::cout << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();
	delete wrong_animal;
	delete wrong_cat;

	return 0;
}
