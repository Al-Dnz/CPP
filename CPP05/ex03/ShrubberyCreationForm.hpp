#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>  
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{

	private:
      std::string _target;
      
	public:

		ShrubberyCreationForm(std::string target = "undefined");
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

    void	execute(Bureaucrat const & executor) const;
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */