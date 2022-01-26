#include "Cat.hpp"
#include "Dog.hpp"

#define ARR_SIZE 10

int main()
{
	
	const AAnimal* dog = new Dog();
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();
	delete dog;
	std::cout << "--------------------------------" << std::endl;


	const AAnimal* cat = new Cat();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	delete cat;
	std::cout << "--------------------------------" << std::endl;
	

	// Test that ABSTRACT CLASS can't be instanciated isolatedly 
	// const AAnimal* aanimal = new AAnimal();
	// std::cout << aanimal->getType() << " " << std::endl;
	// aanimal->makeSound();
	// delete aanimal;
	std::cout << "--------------------------------" << std::endl;
}
