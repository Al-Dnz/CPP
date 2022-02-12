#ifndef HEADER_HPP
# define HEADER_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdio.h>
# include <cstdlib>
# include "Contact.hpp"
# include "Phonebook.hpp"

std::string	trim_space(std::string str);
void		print_line(int n, char c);
std::string str_toupper(std::string str);
std::string	data_display_format(std::string str);

void	    display_usage(void);
int	        get_data(std::string& input, std::string data_kind);
Contact	    create_contact(void);
void	    select_contact(Phonebook phonebook);

#endif