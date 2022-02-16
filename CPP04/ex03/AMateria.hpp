#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# pragma once

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"


class ICharacter;

class AMateria
{

	protected:
		std::string _type;

	public:
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;

};

#endif /* ******************************************************** AMATERIA_H */