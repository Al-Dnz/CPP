#include "header.h"

void		Phonebook::print(void)
{
	int i = -1;
	print_line(76, '=');
	std::cout << std::setw(10) << "INDEX" << " | ";
	std::cout << std::setw(10) << "FIRST_NAME" << " | ";
	std::cout << std::setw(10) << "LAST_NAME" << " | ";
	std::cout << std::setw(10) << "NICK_NAME" << " | ";
	std::cout << std::setw(10) << "PHONE" << " | ";
	std::cout << std::setw(10) << "SECRET" << std::endl;
	print_line(76, '=');
	while (++i < contact_number)
		contact_tab[i].print_contact_form();
}
