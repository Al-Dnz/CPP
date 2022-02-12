#include "header.hpp"

int		Contact::set_first_name(std::string input)
{
	input = trim_space(input);

	if (input.length() == 0)
	{
		std::cout << "\033[1;31merror in first_name format\033[0m" << std::endl;
		return (0);
	}
	first_name = input;
	return (1);
}

int		Contact::set_last_name(std::string input)
{
	input = trim_space(input);
	if (input.length() == 0)
	{
		std::cout << "\033[1;31merror in last_name format\033[0m" << std::endl;
		return (0);
	}
	last_name = input;
	return (1);
}

int		Contact::set_nickname(std::string input)
{
	input = trim_space(input);
	if (input.length() == 0)
	{
		std::cout << "\033[1;31merror in nickname format\033[0m" << std::endl;
		return (0);
	}
	nickname = input;
	return (1);
}

int		Contact::set_phone_number(std::string input)
{
	int i;
	int digit_input(1);

	input = trim_space(input);
	for(i = 0; input[i]; i++)
		if (!isdigit(input[i]))
			digit_input = 0;
	if (input.length() != 10 || digit_input == 0)
	{
		std::cout << "\033[1;31merror in phone_number format (10 digits required)\033[0m" << std::endl;
		return (0);
	}
	phone_number = input;
	return (1);	
}

int		Contact::set_dark_secret(std::string input)
{
	input = trim_space(input);
	if (input.length() == 0)
	{
		std::cout << "\033[1;31merror in dark secret format\033[0m" << std::endl;
		return (0);
	}
	dark_secret = input;
	return (1);
}

void	Contact::set_index(int i)
{
	index = i;
}


void	Contact::print_contact_form(void)
{
	std::string index_str;

	index_str = std::to_string(index);
	std::cout << std::setw(10) << data_display_format(index_str) << " | ";
	std::cout << std::setw(10) << data_display_format(first_name) << " | ";
	std::cout << std::setw(10) << data_display_format(last_name) << " | ";
	std::cout << std::setw(10) << data_display_format(nickname) << " | ";
	std::cout << std::setw(10) << data_display_format(phone_number) << " | " << std::endl;
}

void	Contact::print_contact_card(void)
{
	std::string index_str;
	std::string arr[6] = 
	{
		index_str,
		first_name,
		last_name,
		nickname,
		phone_number,
		dark_secret
	};
	unsigned int max_len = 0;
	int i = 0;
	while (i < 6)
	{
		if (arr[i].length() > max_len)
			max_len = arr[i].length();
		i++;
	}
	print_line(max_len + 18, '-');
	index_str = std::to_string(index);
	std::cout << std::left << std::setw(16) << "|index: " << std::right << std::setw(max_len + 1) << index_str << "|" << std::endl;;
	std::cout << std::left << std::setw(16) << "|first_name: " << std::right << std::setw(max_len + 1) << first_name << "|" << std::endl;;
	std::cout << std::left << std::setw(16) << "|last_name: " << std::right << std::setw(max_len + 1) << last_name << "|" << std::endl;;
	std::cout << std::left << std::setw(16) << "|nickname: " << std::right << std::setw(max_len + 1) << nickname << "|" << std::endl;;
	std::cout << std::left << std::setw(16) << "|phone_number: " << std::right << std::setw(max_len + 1) << phone_number << "|" << std::endl;;
	std::cout << std::left << std::setw(16) << "|dark_secret: " << std::right << std::setw(max_len + 1) << dark_secret << "|" << std::endl;
	print_line(max_len + 18, '-');
}