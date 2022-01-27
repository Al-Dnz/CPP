#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

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
		unsigned int	getGrade(void) const;
		void			promote(void);
		void			retrograde(void);

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

#endif /* ****************************************************** BUREAUCRAT_H */

typedef Bureaucrat::GradeTooHighException BGradeTooHighException;
typedef Bureaucrat::GradeTooLowException BGradeTooLowException;