#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{

	private:

		std::vector<int> _data;
		unsigned int	_size;

	public:

		Span(unsigned int N = 0);
		Span(Span const & src);
		~Span();
		Span &			operator=(Span const & rhs);
		int & 			operator[](const unsigned int index);

		int				getMaxSize(void) const;
		int				getVecSize(void) const;
		void			addNumber(int n);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

/* __________________________EXCEPTION_CLASS_________________________________*/

	class ArrayOverflowError: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Array is full");
			}
	};

	class ArrayIndexError: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Array index is out of right range");
			}
	};

	class InsufficientValueNumber: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Array does not contain enough number to produce a result");
			}
	};

};

std::ostream &			operator<<( std::ostream & o, Span & span );

#endif /* ************************************************************ SPAN_H */