#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int	i;
	char	c;

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
				std::cout << c;
				argv[i]++;
			}
			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
