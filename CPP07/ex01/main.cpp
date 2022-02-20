#include "iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; } 
		int get( void ) const { return this->_n; } 
		
	private: 
		int _n;
}; 

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) 
{
	o << rhs.get();
	return o; 
}
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; } 
	
void	print_char(const char& c)
{
	std::cout << c << " ";
}

void	print_str(const std::string&  str)
{
	std::cout << str << " ";
}

void	print_int(const int& i)
{
	std::cout << i << " ";
}

void	print_float(const float& i)
{
	std::cout << i << " ";
}

template <typename T>
void	print_element(const T& e)
{
	std::cout << e << " ";
}

int	main(void)
{
	std::cout << "______________________COR_TESTS___________________\n" << std::endl;
	
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	std::cout << "\n____________________PERSONAL_TESTS___________________\n" << std::endl;

	int			int_arr[4] = {1,2,3,4};
	float		float_arr[4] = {1.66f, 2.57f ,3.7104f ,4.00657f};
	char		char_arr[4] = {'a', 'b', 'c', 'd'};
	std::string	str_arr[4] = {"hello", "world", "foo", "bar"};


	::iter<int>(int_arr, 4, &print_int);
	std::cout << std::endl;
	::iter<float>(float_arr, 4, &print_float);
	std::cout << std::endl;
	::iter<char>(char_arr, 4, &print_char);
	std::cout << std::endl;
	::iter<std::string>(str_arr, 4, &print_str);
	std::cout << "\n--------------------------" << std::endl;

	::iter(int_arr, 4, &print_element);
	std::cout << std::endl;
	::iter(float_arr, 4, &print_element);
	std::cout << std::endl;
	::iter(char_arr, 4, &print_element);
	std::cout << std::endl;
	::iter(str_arr, 4, &print_element);
	std::cout << std::endl;

	return 0;
}