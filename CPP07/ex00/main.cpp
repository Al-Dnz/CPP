#include <iostream>
#include "whatever.hpp"

class Awesome
{
	private: 
		int _n;

	public:
		Awesome(void) : _n(0) {}
		Awesome( int n ) : _n( n ) {}
		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
		bool 	operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool 	operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); } 
		bool 	operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); } 
		bool 	operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); } 
		bool 	operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); } 
		bool 	operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); } 
		int		get_n() const { return _n; } 
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int	main( void ) 
{
	std::cout << "______________________COR_TESTS___________________\n" << std::endl;
	Awesome	a(2);
	Awesome	b(4);

	std::cout << a << " " << b << std::endl;
	swap(a,b);
	std::cout << a << " " << b << std::endl;
	std::cout << ::max(a, b) << std::endl;
	std::cout << ::min(a, b) << std::endl;

	std::cout << "\n______________________PERSONAL_TESTS___________________\n" << std::endl;
	std::cout << "---type int---\n" << std::endl;
	int i = 2;
	int j = 3;
	std::cout << "i = " << i << ", j = " << j << std::endl;
	::swap( i, j );
	std::cout << "i = " << i << ", j = " << j << std::endl;
	std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
	std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;

	std::cout << "\n---type string---\n" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\n---type char---\n" << std::endl;
	char x = 'x';
	char y = 'y';
	std::cout << "x = " << x << ", y = " << y << std::endl;
	::swap(x, y);
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;
	return 0; 
}
