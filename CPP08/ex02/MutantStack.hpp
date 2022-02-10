#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>

template <typename T>
class MutantStack: public std::stack<T>
{

	public:

		MutantStack(){};
		MutantStack(MutantStack const & src) {*this = src;};
		~MutantStack(){};

		template <typename T>
		MutantStack &		operator=( MutantStack const & rhs ){ std::stack<T>::operator=(rhs); };

	private:

};

template <typename T>
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i );

#endif /* ***************************************************** MUTANTSTACK_H */