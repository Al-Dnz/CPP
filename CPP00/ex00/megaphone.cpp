#include <iostream>
#include <cctype>

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

int main(int argc, char **argv)
{
	int	i;
	char	c;
	std::string str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		i = 0;
		while (++i < argc)
		{
			while (*argv[i])
			{
				c = std::toupper(*argv[i]);
				str += c;
				argv[i]++;
			}
			str = trim_space(str);
			std::cout << str;
			str.clear();
			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
