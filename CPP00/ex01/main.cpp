#include "header.hpp"

void	display_usage(void)
{
	std::cout << "[\033[1;33mADD\033[0m]";
	std::cout << "[\033[1;33mSEARCH\033[0m]";
	std::cout << "[\033[1;33mEXIT\033[0m]" << std::endl;	
}

int	get_data(std::string& input, std::string data_kind)
{
	data_kind = "\033[1;36m" + data_kind + "\033[0m";
	std::cout << "\033[1;35m=>Set Contact \033[0m" << data_kind << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(1);
	return (1);
}

Contact	create_contact()
{
	Contact contact;
	std::string str;
	bool valid_step;
	std::string data_kind[5] = {"first_name", "last_name", "nickname", "phone_number", "dark_secret"};
	std::string default_str[5] = {"xxxxxxxxxx", "xxxxxxxxxx", "xxxxxxxxxx", "0000000000", "xxxxxxxxxx"};
	setter method[5] = 
	{
		&Contact::set_first_name, 
		&Contact::set_last_name,
		&Contact::set_nickname,
		&Contact::set_phone_number,
		&Contact::set_dark_secret
	};
	int i = 0;
	while (i < 5)
	{
		valid_step = false;
		while (valid_step == false)
		{
			if (!get_data(str, data_kind[i]))
				str = default_str[i];
			if ((contact.*method[i])(str))
				valid_step = true;
			str.clear();	
		}
		valid_step = false;
		i++;
	}
	return(contact);
}

void	select_contact(Phonebook phonebook)
{
	std::string input;
	bool error;
	int index;
	int i;

	error = true;
	while (error == true)
	{
		i = 0;
		std::cout << "\033[1;35m=>Select Contact Index \033[0m"<< std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		input = trim_space(input);
		while (input[i])
		{
			error = false;
			if (!std::isdigit(input[i]))
			{
				error = true;
				input.clear();
				std::cout << "\033[1;31mcontact index is not valid\033[0m";
				std::cout << "\033[1;31m [tape 0 to quit]\033[0m" << std::endl;
				break;
			}
			i++;
		}
		if (error == false)
		{
			index = std::stoi(input);
			if (index == 0)
				return ;
			if (index < 1 || index > phonebook.contact_number)
			{
				std::cout << "\033[1;31mcontact does not exist at this index\033[0m";
				std::cout << "\033[1;31m [tape 0 to quit]\033[0m" << std::endl;
				error = true;
			}		
		}
	} 
	phonebook.contact_tab[index - 1].print_contact_card();
}

int main(void)
{
	std::string			input;
	Phonebook			phonebook;
	int					index = 0;

	while (true)
	{
		std::cout  << "\033[1;34mSELECT AN OPERATION: \033[0m";
		display_usage();
		getline(std::cin, input);
		input = str_toupper(input);			
		if (input.compare("EXIT") == 0 || std::cin.eof())
			break ;
		else if (input.compare("ADD") == 0)
		{
			if (index < 8)
			{
				phonebook.contact_tab[index] = create_contact();
				phonebook.contact_tab[index].set_index(index + 1);
				phonebook.contact_number++;
				index++;
			}
			else
				std::cout << "\033[1;31mphonebook is full\033[0m" << std::endl;
		}	
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.print();
			select_contact(phonebook);
		}
		else
			std::cout << "\033[1;31mOPERATION NOT PERMITTED\033[0m" << std::endl;
	}
	return (0);
}
