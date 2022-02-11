#include <iostream>
#include <string>
#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen karen;
	const int size = 4;
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string str(argv[1]);
	int index;

	if (argc < 2)
		return (1);
	index = std::find(arr, arr + size, str) - arr;
	if (index < 4)
		std::cout << "[" << argv[1] << "]" << std::endl;
	switch(index)
	{
		case 0:
			karen.complain("debug");
		case 1:
			karen.complain("info");
		case 2:
			karen.complain("warning");
		case 3:
			karen.complain("error");
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return (0);
}