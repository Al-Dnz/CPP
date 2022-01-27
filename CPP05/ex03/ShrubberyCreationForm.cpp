#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target + "_shrubbery", false ,137, 147), _target(target)
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

void ShrubberyCreationForm::action(void)
{

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