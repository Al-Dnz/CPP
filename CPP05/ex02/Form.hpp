#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		unsigned int					_signature_grade;
		unsigned int					_execution_grade;			

	public:

		Form();
		Form(std::string name, bool is_signed, int s_grade, int e_grade);
		Form( Form const & src );
		virtual ~Form();
		Form &		operator=( Form const & rhs );

		std::string		getName(void) const;
		bool			getSigned(void) const;
		unsigned int				getSignatureGrade(void) const;
		unsigned int				getExecutionGrade(void) const;

		void			beSigned(Bureaucrat bureaucrat);
		virtual void	action(void) = 0;

	/* __________________________EXCEPTION_CLASS_________________________________*/

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grade's bureaucrat is too high to manage this form!");
			}

	};

	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grade's bureaucrat is too low to manage this form!");
			}

	};

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */