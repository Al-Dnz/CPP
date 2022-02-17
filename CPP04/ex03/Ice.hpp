#ifndef ICE_HPP
# define ICE_HPP


# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "Ice.hpp"

class Ice: public AMateria
{

	public:

		Ice();
		~Ice();
		Ice* clone(void) const;
		void use(ICharacter & target);

	private:

};

#endif /* ************************************************************* ICE_H */