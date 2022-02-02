#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *arr, size_t size, void (*f)(const T& tab))
{
	size_t	i(-1);

	while (++i < size)
		f(arr[i]);
};

#endif