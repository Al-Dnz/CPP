#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int N):  _data(0), _size(N)
{
}

Span::Span(): _data(0),  _size(0)
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
	unsigned int min = longestSpan();
	std::vector<int> v = _data;
	if (_data.size() < 2)
		throw Span::InsufficientValueNumber();
	else
	{
		 sort(v.begin(), v.end());
		for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) 
		{
			for (std::vector<int>::const_iterator it2 = it + 1; it2 != v.end(); ++it2)
			{
				if (static_cast<unsigned int>(abs(*it - *it2)) < min)
					min = static_cast<unsigned int>(abs(*it - *it2));
			}
    	}
		return min;
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

void Span::addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	std::vector<int>::iterator it = _data.end();
	if (static_cast<unsigned long>(abs(end - begin)) > static_cast<unsigned long>((_size - _data.size())))
	 	throw Span::TooBigRange();
	_data.insert(it, begin, end);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int			Span::getMaxSize(void) const {return _size;};

int			Span::getVecSize(void) const {return _data.size();};

/* ************************************************************************** */