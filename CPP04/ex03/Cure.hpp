#ifndef CURE_HPP
# define CURE_HPP


# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{

	public:

		Cure();
		~Cure();
		Cure* clone(void) const;
		void use(ICharacter & target);

	private:

};

#endif /* ************************************************************ CURE_H */