#include "header.hpp"

class Phonebook
{
	private:
		unsigned int	contact_number;
		Contact			contact_tab[8];
		
	public:
		Phonebook():	contact_number(0) {};
		void			print(void);
		int				get_contact_number(void);
		void			increment_contact_number(void);
		Contact&        get_contact(unsigned int index);
		
};