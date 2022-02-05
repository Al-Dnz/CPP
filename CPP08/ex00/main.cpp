
#include "easyfind.hpp"

int	main(void)
{

	int search = 98;
	int search2 = 215;

	std::vector<int> int_vector(5);
	int_vector.push_back(215);
	int_vector.push_back(0);
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

	std::cout << "\n---------------------------" << std::endl;
	std::list<int> int_list(5);
	int_list.push_back(215);
	int_list.push_back(0);
	int_list.push_back(66);
	int_list.push_back(3);
	std::list<int>::iterator it2; 
	try
	{
		it2 = easyfind(int_list, search);
		std::cout << std::to_string(search) << " occurs in int_list" << std::endl;
	}
	catch(const std::string &e)
	{
		std::cerr << e << '\n';
	}
	try
	{
		it2 = easyfind(int_list, search2);
		std::cout << std::to_string(search2) << " occurs in int_list" << std::endl;
	}
	catch(const std::string &e)
	{
		std::cerr << e << '\n';
	}
	
	std::cout << "\n---------------------------" << std::endl;
	

	return 0;
}