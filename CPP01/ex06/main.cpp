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
			break;
		case 1:
			karen.complain("info");
			break;
		case 2:
			karen.complain("warning");
			break;
		case 3:
			karen.complain("error");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}