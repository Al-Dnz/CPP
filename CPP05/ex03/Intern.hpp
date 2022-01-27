#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Intern &		operator=( Intern const & rhs );
		
		Form* makeForm(std::string s1, std::string s2);

	private:
		int		getIndex(std::string s);
		Form*	ShrubberyCreationFormGen(std::string target);
		Form*	RobotomyRequestFormGen(std::string target);
		Form*	PresidentialPardonFormGen(std::string target);

};

typedef Form* (Intern::*_gen)(std::string);

#endif /* ********************************************************** INTERN_H */