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

int		main(void)
{
	Span span(4);
	display_span(span);
	std::cout << std::endl;

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
	std::cout << std::endl;

	std::cout << "add one more in span :" << std::endl;
	try
	{
		span.addNumber(831);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	display_span(span);
	std::cout << std::endl;

	std::cout << "copy_span" << std::endl;
	Span span2 = span;
	std::cout << "span2=> ";
	std::cout << span2 << std::endl;
	std::cout << std::endl;

	try
	{
		std::cout << "span2[1] => " << span2[1] << std::endl;
		std::cout << "span2[6] => " << span2[6] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

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
	std::cout << std::endl;

	std::cout << "span inchanged : ";
	std::cout << span << std::endl;
	std::cout << std::endl;

	Span span3(10);
	std::cout << "span3 created :" << std::endl;
	std::cout << "	capacity     = " << span3.getMaxSize() << std::endl;
	std::cout << "	current size = " << span3.getVecSize() << std::endl;
	std::cout << std::endl;

	std::vector<int> v;
	generate_random_vector(v, 20);
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
	std::cout << std::endl;

	generate_random_vector(v, 5);
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
	std::cout << "span3:" << std::endl;
	std::cout << "	capacity     = " << span3.getMaxSize() << std::endl;
	std::cout << "	current size = " << span3.getVecSize() << std::endl;
	std::cout << std::endl;

	Span span4(0);
	std::cout << "span4:" << std::endl;
	std::cout << "	capacity     = " << span4.getMaxSize() << std::endl;
	std::cout << "	current size = " << span4.getVecSize() << std::endl;
	try
	{
		span4.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	Span span5(2);
	span5.addNumber(4);
	std::cout << "span5:" << std::endl;
	std::cout << "	capacity     = " << span5.getMaxSize() << std::endl;
	std::cout << "	current size = " << span5.getVecSize() << std::endl;
	std::cout << "span5 => ";
	std::cout << span5 << std::endl;
	try
	{
		std::cout << "span5 shortest_span => "<< span5.shortestSpan()  << std::endl;
		std::cout << "span5 longest_span => "<< span5.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	span5.addNumber(9);
	std::cout << "span5 => ";
	std::cout << span5 << std::endl;
	try
	{
		std::cout << "span5 shortest_span => "<< span5.shortestSpan()  << std::endl;
		std::cout << "span5 longest_span => "<< span5.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
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