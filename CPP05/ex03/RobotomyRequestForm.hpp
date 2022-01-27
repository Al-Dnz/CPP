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

		void						action(void);

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */