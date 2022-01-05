#include "header.h"

// int 	find_str_index(char str[], char arr[4][])
// {
// 	int	i;
	
// 	for (i = 0; arr[i]; i++)
// 	{
// 		if (strcmp(str, arr[i]) == 0)
// 			return (i);
// 	}
// 	return (-1);
// }

void	display_usage(void)
{
	std::cout << "[\033[1;33mADD\033[0m]";
	std::cout << "[\033[1;33mSEARCH\033[0m]";
	std::cout << "[\033[1;33mEXIT\033[0m]" << std::endl;
	
}

int	get_data(std::string& input, std::string data_kind)
{
	data_kind = "\033[1;36m" +data_kind + "\033[0m";
	std::cout << "\033[1;35m=>Set Contact \033[0m" << data_kind << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(1);
	return (1);
}

void	print_phonebook(Phonebook phonebook)
{
	int i = -1;
	while (++i < phonebook.contact_number)
		phonebook.contact_tab[i].print_contact_form();
}

Contact	create_contact()
{
	Contact contact;
	std::string str;
	bool valid_step;
	std::string str[5] = {"first_name", "last_name", "nickname", "phone_number", "dark_scret"};
	std::string default_str[5] = {"xxxxxxxxxx", "xxxxxxxxxx", "xxxxxxxxxx", "0000000000", "xxxxxxxxxx"};
	int	function[5](std::str) = 
	{
		contact.set_first_name, 
		contact.set_last_name,
		contact.set_nickname,
		contact.set_phone_number,
		contact.set_dark_secret
	}

	valid_step = false;
	while (valid_step == false)
	{
		if (!get_data(str, "first name"))
			str = "xxxxxxxxxx";
		if (contact.set_first_name(str))
			valid_step = true;
		str.clear();	
	}
	valid_step = false;

	while (valid_step == false)
	{
		if (!get_data(str, "last name"))
			str = "xxxxxxxxxx";
		if(contact.set_last_name(str))
			valid_step = true;
		str.clear();
	}
	valid_step = false;

	while (valid_step == false)
	{
		if (!get_data(str, "nickname"))
			str = "xxxxxxxxxx";
		if (contact.set_nickname(str))
			valid_step = true;
		str.clear();
	}
	valid_step = false;

	while (valid_step == false)
	{
		
		if(!get_data(str, "phone number"))
			str = "0000000000";
		if(contact.set_phone_number(str))
			valid_step = true;
		str.clear();
	}
	valid_step = false;

	while (valid_step == false)
	{
		if(!get_data(str, "dark secret"))
			str = "xxxxxxxxxx";
		if (contact.set_dark_secret(str))
			valid_step = true;
		str.clear();
	}
	valid_step = false;

	return(contact);
}

int main(void)
{
	
	std::string			input;
	Phonebook			phonebook;
	int					index = 0;

	while (true)
	{
		std::cout  << "\033[1;34mSELECT AN OPERATION: \033[0m" << std::uppercase;
		display_usage();
		getline(std::cin, input);			
		if (input.compare("EXIT") == 0 || std::cin.eof())
			break ;
		else if (input.compare("ADD") == 0)
		{
			if (index < 4)
			{
				phonebook.contact_tab[index++] = create_contact();
				std::cout << phonebook.contact_number++ << std::endl;
			}
			else
				std::cout << "phonebook is full" << std::endl;
		}	
		else if (input.compare("SEARCH") == 0)
			print_phonebook(phonebook);
		else
			std::cout << "\033[1;31mOPERATION NOT PERMITTED\033[0m" << std::endl;

	}
	
	// delete &phonebook;
	return (0);
}
