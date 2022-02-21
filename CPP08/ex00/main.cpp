#include "easyfind.hpp"

int	main(void)
{

	int search = 215;
	int search2 = 98;
	int search3 = 0;
	int search4 = 3;

	std::vector<int> int_vector;
	int_vector.push_back(215);
	int_vector.push_back(1);
	int_vector.push_back(66);
	int_vector.push_back(3);
	std::vector<int>::iterator it;

	try
	{
		it = easyfind(int_vector, search);
		std::cout << std::to_string(search) << " occurs in int_vector" << std::endl;
	}
	catch(const std::string &e)
	{
		std::cerr << e << '\n';
	}

	try
	{
		it = easyfind(int_vector, search2);
		std::cout << std::to_string(search2) << " occurs in int_vector" << std::endl;
	}
	catch(const std::string &e)
	{
		std::cerr << e << '\n';
	}

	try
	{
		it = easyfind(int_vector, search3);
		std::cout << std::to_string(search3) << " occurs in int_vector" << std::endl;
	}
	catch(const std::string &e)
	{
		std::cerr << e << '\n';
	}

	try
	{
		it = easyfind(int_vector, search4);
		std::cout << std::to_string(search4) << " occurs in int_vector" << std::endl;
	}
	catch(const std::string &e)
	{
		std::cerr << e << '\n';
	}

	return 0;
}

