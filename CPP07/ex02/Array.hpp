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

	public:

		Array();
		Array(unsigned int n);
		Array( Array const & src );
		~Array();

		Array &	operator=( Array const & rhs );
		T & 	operator[](const unsigned int index);

		unsigned int size(void) const;

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
std::ostream &			operator<<( std::ostream & o, Array<T> const & i );

#endif /* *********************************************************** ARRAY_H */