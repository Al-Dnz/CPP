#include "header.hpp"

int main(void)
{
	std::string			input;
	Phonebook			phonebook;
	int					index = 0;
	Contact				contact;

	while (true)
	{
		std::cout  << "\033[1;34mSELECT AN OPERATION: \033[0m";
		display_usage();
		getline(std::cin, input);
		input = trim_space(input);
		input = str_toupper(input);			
		if (input.compare("EXIT") == 0 || std::cin.eof())
			break ;
		else if (input.compare("ADD") == 0)
		{
			if (index < 8)
			{
				phonebook.contact_tab[index] = create_contact();
				phonebook.contact_tab[index].set_index(index + 1);
				phonebook.increment_contact_number();
				index++;
			}
			else
			{
				for (int i = 1; i < 8; i++)
				{
					phonebook.contact_tab[i - 1] = phonebook.contact_tab[i];
					phonebook.contact_tab[i - 1].set_index(i);
				}
				phonebook.contact_tab[7] = create_contact();
				phonebook.contact_tab[7].set_index(8);
				index++;
			}
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
