#include "header.hpp"

int is_full_digit(std::string str, char exception1, char exception2)
{
	int i = 0;
	if (str[0]== '.')
		return 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] == exception1 || str[i] == exception2)
			i++;
		if (str[i] && !isdigit(str[i]))
			return 0;
		i++;
	}
	return 1;
}

std::string clean_str(std::string &str)
{
	bool minus = str[0] == '-';
	int i = 0;

	if (str[0] == '0' && str.length() == 1)
		return str;
	if (minus)
		i++;
	while (str[i] && str[i] == '0')
	{
		if(str[i + 1] && str[i + 1] == '.')
			break;
		i++;
	}
	str = str.substr(i , str.length());
	if (minus)
		str = '-' + str;
	return str;
}

int	char_occurence(std::string str, char c)
{
	int	i = 0;
	int	count = 0;

	while (str[i])
	{
		if (str[i] == c)
			count++;;
		i++;
	}
	return count;
}

bool	integer_overflow(std::string str)
{
	long l;
	int i(0);

	while (str[i] && str[i] != '.')
		i++;
	if (i == 1)
		return false;
	if (i > 11)
		return true;
	l = stol(str);
	if (l < INT_MIN || l > INT_MAX)
		return true;
	return false;
}

int find_index_type(std::string str)
{
	if (str == "+inf" || str == "+ inf" || str == "inf")
		return 4;
	else if (str == "-inf" || str == "- inf")
		return 5;
	if (str == "+inff" || str == "+ inff" || str == "inff")
		return 6;
	else if (str == "-inff" || str == "- inff")
		return 7;
	else if (is_full_digit(str) && !integer_overflow(str))
		return 0;
	else if ((is_full_digit(str, '.') && char_occurence(str, '.') == 1 && str[str.length() - 1] != '.') || (is_full_digit(str) && integer_overflow(str)))
		return 1;
	else if (is_full_digit(str, '.', 'f') && char_occurence(str, '.') == 1 && char_occurence(str, 'f') == 1 && str[str.length() - 1] == 'f')
		return 2;
	else if (str.length() == 1 && isprint(str[0]) && (str[0] < 48 || str[0] > 57))
		return 3;
	else
		return -1;	
}