#ifndef CONTACT_H
#define CONTACT_H

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	dark_secret;

	public:
		int		set_first_name(std::string str);
		int		set_last_name(std::string str);
		int		set_nickname(std::string str);
		int		set_phone_number(std::string str);  
		int		set_dark_secret(std::string str);
		void	print_contact_form(void);
};

#endif
