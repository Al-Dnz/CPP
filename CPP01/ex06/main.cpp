#include <iostream>
#include <string>
#include "Karen.hpp"

int	main(int argc, char **argv)
{
	
	Karen karen;
	const int size = 4;
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index;
	if (argc != 2)
		return (1);
		
	std::string str(argv[1]);
	index = std::find(arr, arr + size, str) - arr;
	switch(index)
	{
		case 0:
			karen.complain("DEBUG");
		case 1:
			karen.complain("INFO");
		case 2:
			karen.complain("WARNING");
		case 3:
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return (0);
}