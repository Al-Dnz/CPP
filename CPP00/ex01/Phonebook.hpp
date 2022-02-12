#include "header.hpp"

class Phonebook
{
	private:
		unsigned int	contact_number;
		
	public:
		Phonebook():	contact_number(0) {};
		Contact			contact_tab[8];
		void			print(void);
		int				get_contact_number(void);
		void			increment_contact_number(void);
		
};