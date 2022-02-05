#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int N): _size(N), _data(0)
{
}

Span::Span(unsigned int N): _size(N)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		_size = rhs._size;
		_data = rhs._data;
	}
	return *this;
}

int &				Span::operator[](const unsigned int index)
{
	if (index < 0 || index >= _data.size())
		throw(Span::ArrayIndexError());
	else
		return _data[index];
}

std::ostream &			operator<<( std::ostream & o, Span & span )
{
	int size = span.getVecSize();
	o << "[ ";
	for (int i = 0; i < size; i++)
	{
		o << span[i];
		if (i != size - 1)
			o << ", ";
	}
	o << " ]";	
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Span::addNumber(int n)
{
	if (_data.size() == _size)
		throw(Span::ArrayOverflowError());
	_data.push_back(n);
}

unsigned int Span::shortestSpan(void) const
{
	std::vector<int> v = _data;
	if (_data.size() < 2)
		throw Span::InsufficientValueNumber();
	else
	{
		 sort(v.begin(), v.end());
		 return (v[1] - v[0]);
	}

}

unsigned int Span::longestSpan(void) const
{
	std::vector<int> v = _data;
	sort(v.begin(), v.end());
	if (_data.size() < 2)
		throw Span::InsufficientValueNumber();
	else
	{
		sort(v.begin(), v.end());
		return (v.back() - v.front());
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int			Span::getMaxSize(void) const {return _size;};

int			Span::getVecSize(void) const {return _data.size();};

/* ************************************************************************** */