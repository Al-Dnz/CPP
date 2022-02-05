
// must implement an exception because *it = 0 when occurence is not found
template <typename T>
typename T::iterator	easyfind(T container, int i)
{
	typename T::iterator it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw std::string(std::to_string(i) + ": Occurence not found");
	return it;
}