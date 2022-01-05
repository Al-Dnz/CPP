#include "header.h"

int Contact::set_first_name(std::string input)
{
	if (input.length() == 0)
	{
		std::cout << "error in first_name format" << std::endl;
		return (0);
	}
	first_name = input;
	return (1);
}

int Contact::set_last_name(std::string input)
{
	if (input.length() == 0)
	{
		std::cout << "error in lasst_name format" << std::endl;
		return (0);
	}
	last_name = input;
	return (1);
}

int Contact::set_nickname(std::string input)
{
	if (input.length() == 0)
	{
		std::cout << "error in nickname format" << std::endl;
		return (0);
	}
	nickname = input;
	return (1);
}

int Contact::set_phone_number(std::string input)
{
	int i;
	int digit_input(1);

	for(i = 0; input[i]; i++)
		if (!isdigit(input[i]))
			digit_input = 0;
	if (input.length() != 10 || digit_input == 0)
	{
		std::cout << "\033[1;31merror in phone_number format\033[0m" << std::endl;
		return (0);
	}
	phone_number = input;
	return (1);	
}

int Contact::set_dark_secret(std::string input)
{
	dark_secret = input;
	return (1);
}

void	Contact::print_contact_form(void)
{
	std::cout <<std::setw(10)<< first_name << " |";
	std::cout <<std::setw(10)<< last_name << " |";
	std::cout <<std::setw(10)<< nickname << " |";
	std::cout <<std::setw(10)<< phone_number << " |";
	std::cout <<std::setw(10)<< dark_secret << std::endl;
}