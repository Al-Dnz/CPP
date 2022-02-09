#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
MateriaSource::MateriaSource(void): _storage()
{
}

MateriaSource::MateriaSource(MateriaSource const &src): _storage()
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _storage_size; i++)
	{
		delete _storage[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs) 
	{
		for (int i = 0; i != _storage_size; ++i) 
		{
			delete _storage[i];
			if (rhs._storage[i])
				_storage[i] =  rhs._storage[i]->clone();
			else
			 	_storage[i] = 0;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i != _storage_size; ++i) 
	{
		if (_storage[i] == materia)
			return ;
	}
	for (int i = 0; i != _storage_size; ++i) 
	{
		if (!_storage[i]) 
		{
			_storage[i] = materia;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria* materia;

	for (int i = 0; i != _storage_size; ++i) 
	{
		if (_storage[i] && _storage[i]->getType() == type)
		{
			materia = _storage[i]->clone();
			if (materia == NULL)
				return (NULL);
			else
				return materia;		
		}
	}
	return 0;

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */