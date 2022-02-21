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
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator rev_iterator;


		iterator begin() {return this->c.begin();};
		iterator end() {return this->c.end();};

		const_iterator cbegin() {return this->c.cbegin();};
		const_iterator cend() {return this->c.cend();};

		rev_iterator rbegin() {return this->c.rbegin();};
		rev_iterator rend() {return this->c.rend();};

	private:

};

#endif /* ***************************************************** MUTANTSTACK_H */