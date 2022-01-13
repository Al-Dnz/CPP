#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen karen;

	if (argc > 2)
	{
		std::cout << "too much Karen modes" << std::endl;
		return (1);
	}
	if (argc == 2)
	{
		std::string str(argv[1]);
		karen.complain(str);
	}
	return (0);
}