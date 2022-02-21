#include "Span.hpp"
#include <stdlib.h>
#include <ctime>
#include <algorithm>
#include <random>

void	generate_random_vector(std::vector<int> &vec, unsigned int n)
{
	vec.erase(vec.begin(), vec.end());
	for (unsigned int i = 0; i < n; i++)
		vec.push_back(rand() % 1000);
}

void	display_vector(std::vector<int> const &vec)
{
	std::cout << "vector to insert => { ";
	for(size_t i=0; i < vec.size(); i++)
	{
		std::cout << vec.at(i) << ' ';
		if (i < vec.size() - 1)
			std::cout << ", ";
	}
	std::cout << "}" << std::endl;
}

void	display_span(Span &span)
{
	std::cout << "span => ";
	std::cout << span << std::endl ;
}

int	main(void)
{
	Span span(4);
	display_span(span);
	std::cout << "add 4 number in span :" << std::endl;
	try
	{
		span.addNumber(987);
		span.addNumber(6);
		span.addNumber(899);
		span.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	display_span(span);
	std::cout << "add one more in span :" << std::endl;
	try
	{
		span.addNumber(831);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "span=> ";
	std::cout << span << std::endl;

	Span span2 = span;
	std::cout << "span2=> ";
	std::cout << span2 << std::endl;
	try
	{
		std::cout << "span2[1] => " << span2[1] << std::endl;
		std::cout << "span2[6] => " << span2[6] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		int shortest_span, longest_span;

		shortest_span = span.shortestSpan();
		longest_span = span.longestSpan();
		std::cout << "shortest_span => "<< shortest_span  << std::endl;
		std::cout << "longest_span => "<< longest_span << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "span inchanged : ";
	std::cout << span << std::endl;

	Span span3(10);
	// generate a vector of random number
	std::srand(unsigned(std::time(nullptr)));
	std::vector<int> v;
	generate_random_vector(v, 10);
	display_vector(v);
	std::cout << "span3 before addRange => ";
	std::cout << span3 << std::endl;
	try
	{
		span3.addRange(v.begin(), v.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "span3 after addRange => ";
	std::cout << span3 << std::endl;
	
	return 0;
}




// int	main(void)
// {
// 	Span span(14);
// 	display_span(span);
// 	std::cout << "add 4 number in span :" << std::endl;
// 	try
// 	{
// 		span.addNumber(7);
// 		span.addNumber(3);
// 		span.addNumber(0);
// 		span.addNumber(1);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	display_span(span);
// 	std::cout << std::endl;
// 	std::cout << "shortest_span => "<< span.shortestSpan()  << std::endl;
// 	std::cout << "longest_span => "<< span.longestSpan() << std::endl;

// 	std::cout << std::endl;
// 	std::vector<int> vec;
// 	generate_random_vector(vec, 10);
// 	display_vector(vec);
// 	try
// 	{
// 		span.addRange(vec.begin(), vec.end());
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	display_span(span);

// 	std::cout << std::endl;
// 	generate_random_vector(vec, 10);
// 	display_vector(vec);
// 	try
// 	{
// 		span.addRange(vec.begin(), vec.end());
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	display_span(span);
	
// 	return 0;
// }