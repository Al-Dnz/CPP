#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	private:
		T*				_arr;
		unsigned int	_size;
		Array(){};

	public:

		Array(unsigned int n)
		{
			_arr = new T[n];
			_size = n;
			for(unsigned int i = 0; i < n; i++)
				_arr[i] = 0;
		};

		Array( const Array & src )
		{
			_arr = new T;
			*this = src;
		};

		~Array()
		{
			if (_arr)
				delete[] _arr;
		};

		Array &	operator=( Array const & rhs )
		{
			if ( this != &rhs )
			{
				if (_arr)
					delete[] _arr;
				_arr = new T[rhs._size];
				_size = rhs._size;
				for(unsigned int i = 0; i < rhs._size; i++)
					this->_arr[i] = rhs._arr[i];
			}
			return *this;
		};

		T&	operator[](const unsigned int index)
		{
			if (index < 0 || index >= _size)
				throw(Array<T>::ArrayIndexError());
			else
				return _arr[index];
		};

		unsigned int	size(void) const
		{
			// return  (sizeof(_arr) / sizeof(T));
			return _size;
		};

	/* __________________________EXCEPTION_CLASS_________________________________*/

	class ArrayIndexError: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Array index is out of range");
			}
	};
};

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

#endif /* *********************************************************** ARRAY_H */