#include "Cat.hpp"
#include "Dog.hpp"

#define ARR_SIZE 10

int main()
{
	// Subject Instance Tests
	std::cout << "----------------------------" << std::endl;
	const Animal* k = new Animal();
	std::cout << std::endl;
	delete k;
	std::cout << "----------------------------" << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	delete j;
	std::cout << "----------------------------" << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	delete i;
	std::cout << "*****************************\n" << std::endl;

	// Subject Request
	Animal* arr[ARR_SIZE];
	for(int i = 0; i < ARR_SIZE / 2; i++)
	{
		std::cout << "(" << i << ") ";
		arr[i] = new Cat;
		std::cout << "----------------------------" << std::endl;
	}
	for(int i = ARR_SIZE / 2; i < ARR_SIZE; i++)
	{
		std::cout << "(" << i << ") ";
		arr[i] = new Dog;
		std::cout << "----------------------------" << std::endl;
	}
	std::cout << std::endl;
	for(int i = 0; i < ARR_SIZE; i++)
	{
		delete arr[i];
		std::cout << "----------------------------" << std::endl;
	}

	// Brain Class Test
	Brain brain;
	brain.setIdea(0, "manger");
	brain.setIdea(0, "boire");
	brain.setIdea(10, "jouer");
	brain.setIdea(99, "peindre");
	brain.setIdea(103, "dormir");
	brain.displayIdeas();
		
	return 0;
}
