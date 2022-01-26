#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# pragma once

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();
		MateriaSource &		operator=( MateriaSource const & rhs );

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		static const int _storage_size = 4;
		AMateria* _storage[_storage_size];

};

#endif /* *************************************************** MATERIASOURCE_H */