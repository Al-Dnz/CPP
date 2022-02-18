#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		int					_signature_grade;
		int					_execution_grade;			

	public:

		Form();
		Form(std::string name, bool is_signed, int s_grade, int e_grade);
		Form( Form const & src );
		virtual ~Form();
		Form &		operator=( Form const & rhs );

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getSignatureGrade(void) const;
		int				getExecutionGrade(void) const;

		void			beSigned(Bureaucrat bureaucrat);
		void			setSignature();

		virtual void	action(void) = 0;

	/* __________________________EXCEPTION_CLASS_________________________________*/

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grade's form is too high!");
			}

	};

	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Grade's form is too low!");
			}

	};

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */