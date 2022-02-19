#include "header.hpp"
#include <limits>

int		count_decimal(std::string str)
{
	int	i = 0;
	int count = 0;

	while (str[i] && str[i] != '.')
		i++;
	i++;
	while(str[i] && str[i] != 'f')
	{
		count++;
		i++;
	}
	return count;
}

void	displayer(std::string str, int i, float f, double d, char c)
{
	int decimal_number = count_decimal(str) < 1 ? 1 : count_decimal(str);

	std::cout <<  "char: ";
	if (c == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;
	
	std::cout << "int: " ;
	if (integer_overflow(str))
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;
	std::cout << "float: "  << std::fixed << std::setprecision(decimal_number > 15 ? 15 : decimal_number) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(decimal_number > 47 ? 47 : decimal_number) << d << std::endl;
}

void	inf_case_displayer(std::string str, int i, float f, double d, char c)
{
	std::cout <<  "char: ";
	if (c == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: "  << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void nan_case_displayer(void)
{
	std::cout <<  "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}