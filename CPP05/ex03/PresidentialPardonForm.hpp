#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{

	public:

		PresidentialPardonForm(std::string target = "undefined");
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		
		void	execute(Bureaucrat const & executor) const;

	private:
		std::string _target;

};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */