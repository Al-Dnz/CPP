#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;
class Bureaucrat
{

	private:
		std::string const _name;
		int _grade;

	public:
		Bureaucrat(std::string name = "unNamed", int grade = 150);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		Bureaucrat &	operator=( Bureaucrat const & rhs );

		std::string		getName(void) const;
		int				getGrade(void) const;
		void			promote(void);
		void			retrograde(void);
		void			signForm(Form &form);

/* __________________________EXCEPTION_CLASS_________________________________*/

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grade's bureaucrat is too high !");
			}

	};

	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grade's bureaucrat is too low !");
			}

	};
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */

// typedef Bureaucrat::GradeTooHighException BGradeTooHighException;
// typedef Bureaucrat::GradeTooLowException BGradeTooLowException;