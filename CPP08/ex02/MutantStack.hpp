#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <vector>
# include <stdexcept>

template <typename T>
class MutantStack: public std::stack<T>
{

	public:

		MutantStack(){};
		MutantStack(MutantStack const & src) {*this = src;};
		~MutantStack(){};

		MutantStack &		operator=( MutantStack const & rhs )
		{	
			this->c = rhs.c;
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return this->c.begin();};
		iterator end() {return this->c.end();};

	private:

};

template <typename T>
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i );

#endif /* ***************************************************** MUTANTSTACK_H */