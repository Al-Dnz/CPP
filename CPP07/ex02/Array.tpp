#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template <typename T>
Array<T>::Array()
{
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_arr = new T[n];
	_size = n;
	for(int i = 0; i < n; i++)
		_arr[i] = 0;
}

template <typename T>
Array<T>::Array( const Array & src )
{
	_arr = new T;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template <typename T>
Array<T>::~Array()
{
	delete[] _arr;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
Array<T> &				Array<T>::operator=( Array<T> const & rhs )
{
	if ( this != &rhs )
	{
		delete[] _arr;
		_arr = new T[rhs._size];
		_size = rhs._size;
		for(unsigned int i = 0; i < rhs._size; i++)
			this->_arr[i] = rhs._arr[i];
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[](const unsigned int index)
{
	if (index < 0 || index >= _size)
		throw(Array<T>::ArrayIndexError());
	else
		return _arr[index];
}

template <typename T>
std::ostream &			operator<<( std::ostream & o, Array<T>  & array )
{
	size_t len = array.size();

	o << "[ ";
	for(size_t i = 0; i < len; i++)
	{
		o << array[i];
		if (i != len - 1)
			o << ", ";
	}
	o << "]\n";
	return o;
}




/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

template <typename T>
unsigned int	Array<T>::size(void) const
{
	// return  (sizeof(_arr) / sizeof(T));
	return _size;
}

/* ************************************************************************** */