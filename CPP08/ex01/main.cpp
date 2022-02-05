#include "Span.hpp"
#include <stdlib.h>
#include <ctime>

int	main(void)
{
	Span span(4);
	
	std::cout << span << std::endl;
	try
	{
		span.addNumber(987);
		span.addNumber(6);
		span.addNumber(899);
		span.addNumber(3);
		span.addNumber(831);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << span << std::endl;

	Span span2 = span;
	try
	{
		int i1, i2;

		i1 = span2[3];
		i2 = span2[6];
		std::cout << "span2=> "<< span2 << std::endl;
		std::cout << "span2[3]=> " << i1 << std::endl;
		std::cout << "span2[6]=> " << i2 << std::endl;
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
		std::cout << "shortest_span=> "<< shortest_span  << std::endl;
		std::cout << "longest_span=> "<< longest_span << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << span << std::endl;
	
	

	return 0;
}