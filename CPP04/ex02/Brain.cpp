#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "🧠 A brain is created."<<std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "🧠 A brain is created."<<std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "🤯 A brain is destructed."<<std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	int i = 0;
	int size = getNbIdeas();
	
	if ( this != &rhs )
	{
		while (i < size)
		{
			this->ideas[i] = rhs.ideas[i];
			i++;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Brain::displayIdeas(void) const
{
	unsigned int i = 0;
	unsigned int size = getNbIdeas();
	std::string tmp;

	while (i < size)
	{
		if (i < 10)
			tmp = " ";
		else
			tmp = "";
		std::cout << "(" << i << ")" << tmp << "[" << ideas[i] << "]"<< std::endl;
		i++;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int	Brain::getNbIdeas(void) const { return n; }

void 			Brain::setIdea(unsigned int index, std::string const str)
{
	if (index < 0 || index >= getNbIdeas())
	{
		std::cout << "Error: Brain can't manage this idea_index" << std::endl;
		return ;
	}
	ideas[index] = str;
}

/* ************************************************************************** */