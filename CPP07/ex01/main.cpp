#include "iter.hpp"

void	print_char(const char& c)
{
	std::cout << c << " ";
}

void	print_str(const std::string&  str)
{
	std::cout << str << " ";
}

void	print_int(const int& i)
{
	std::cout << i << " ";
}

template <typename T>
void	print_element(const T& e)
{
	std::cout << e << " ";
}

int	main(void)
{
	int			int_arr[4] = {1,2,3,4};
	char		char_arr[4] = {'a', 'b', 'c', 'd'};
	std::string	str_arr[4] = {"hello", "world", "foo", "bar"};


	::iter<int>(int_arr, 4, &print_int);
	std::cout << std::endl;
	::iter<char>(char_arr, 4, &print_char);
	std::cout << std::endl;
	::iter<std::string>(str_arr, 4, &print_str);
	std::cout << "\n----------------------" << std::endl;

	::iter(int_arr, 4, &print_element);
	std::cout << std::endl;
	::iter(char_arr, 4, &print_element);
	std::cout << std::endl;
	::iter(str_arr, 4, &print_element);
	std::cout << std::endl;

	return 0;
}