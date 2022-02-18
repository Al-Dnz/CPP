#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <time.h>
# include "Form.hpp"


class RobotomyRequestForm: public Form
{

	private:
		std::string _target;

	public:

		RobotomyRequestForm(std::string target = "undefined");
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		void	execute(Bureaucrat const & executor) const;

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */