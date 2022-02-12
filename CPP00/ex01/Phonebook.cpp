#include "header.hpp"

void		Phonebook::print(void)
{
	print_line(64, '=');
	std::cout << std::setw(10) << "INDEX" << " | ";
	std::cout << std::setw(10) << "FIRST_NAME" << " | ";
	std::cout << std::setw(10) << "LAST_NAME" << " | ";
	std::cout << std::setw(10) << "NICK_NAME" << " | ";
	std::cout << std::setw(10) << "PHONE" << " | " << std::endl;
	print_line(64, '=');
	for(unsigned int i = 0; i < contact_number; i++)
		contact_tab[i].print_contact_form();
}

int				Phonebook::get_contact_number(void) { return contact_number; }

void			Phonebook::increment_contact_number(void) { contact_number++; }

Contact&		Phonebook::get_contact(unsigned int index)
{
	return contact_tab[index];
}
