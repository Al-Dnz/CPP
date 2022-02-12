#include "header.hpp"

void	print_line(int n, char c)
{
	int i = 1;

	while (i++ <= n)
		std::cout << c;
	std::cout << std::endl;
}

std::string trim_space(std::string str)
{
	int i;
	int begin = 0;
	int end = str.length() - 1;

	while ((str[begin] >= 9 && str[begin] <= 11) || str[begin] == 32)
		begin++;
	while ((str[end] >= 9 && str[end] <= 11) || str[end] == 32)
		end--;
	str = str.substr(begin, end + 1 - begin);
	i = 0;
	while (str[i])
	{
		if (str[i] == '	')
			str[i] = ' ';
		i++;
	}
	return (str);
}

std::string str_toupper(std::string str)
{
	std::string str_bis;
	int i = 0;
    while (str[i]) 
		str_bis += std::toupper((unsigned char)str[i++]);
	return (str_bis);
}

std::string	data_display_format(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + '.';
	else
		str = str.substr(0, 10);
	return str;
}
