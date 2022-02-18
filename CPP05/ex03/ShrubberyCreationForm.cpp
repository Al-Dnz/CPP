#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target + "_shrubbery", false, 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		Form::operator=(rhs);
		_target= rhs._target;
		return *this;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
        if ( executor.getGrade() > _execution_grade)
	{
		throw Bureaucrat::GradeTooLowException();
		return;
	}
	const std::string ascii_tree = 
        "                                                 .\n"
        "                                      .         ;  \n"
        "         .              .              ;%     ;;  \n "
        "           ,           ,                :;%  %;   \n"
        "            :         ;                   :;%;'     .,  \n" 
        "   ,.        %;     %;            ;        %;'    ,;\n"
        "     ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
        "      %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
        "       ;%;      %;        ;%;        % ;%;  ,%;'\n"
        "        `%;.     ;%;     %;'         `;%%;.%;'\n"
        "         `:;%.    ;%%. %@;        %; ;@%;%'\n"
        "            `:%;.  :;bd%;          %;@%;'\n"
        "              `@%:.  :;%.         ;@@%;'   \n"
        "                `@%.  `;@%.      ;@@%;     \n"    
        "                  `@%%. `@%%    ;@@%;     \n"   
        "                    ;@%. :@%%  %@@%;      \n "
        "                      %@bd%%%bd%%:;     \n"
        "                        #@%%%%%:;;         \n"
        "                        %@@%%%::;          \n"
        "                        %@@@%(o);  . '     \n"        
        "                        %@@@o%;:(.,'       \n"  
        "                    `.. %@@@o%::;         \n"
        "                       `)@@@o%::;         \n"
        "                        %@@(o)::;        \n"
        "                       .%@@@@%::;         \n"
        "                       ;%@@@@%::;.         \n "
        "                      ;%@@@@%%:;;;.       \n"
        "                  ...;%@@@@@%%:;;;;,.. \n";

	std::ofstream outfile (_target + "_shrubbery");
	outfile << ascii_tree << std::endl;
	outfile.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */