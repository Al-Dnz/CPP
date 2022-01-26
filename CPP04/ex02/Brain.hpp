#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();
		Brain &			operator=( Brain const & rhs );
		void			displayIdeas(void) const;
		unsigned int	getNbIdeas(void) const;
		void 			setIdea(unsigned int index, std::string const str);

	private:
		static const unsigned int n = 100; 
		std::string ideas[n];

};

#endif