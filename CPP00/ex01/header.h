#ifndef HEADER_H
# define HEADER_H

# include <iostream>
# include <iomanip>
# include <string>
# include <stdio.h>
# include <vector>
# include "Contact.hpp"
# include "Phonebook.hpp"


typedef struct s_data
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string dark_secret;
}t_data;

#endif