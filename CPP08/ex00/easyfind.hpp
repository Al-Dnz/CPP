#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::iterator	easyfind(T container, int i);

#include "easyfind.tpp"

#endif