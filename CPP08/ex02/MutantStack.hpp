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


		std::stack<T>::container_type::iterator begin(void)
		{
			return this->c.begin();
		}

		std::stack<T>::container_type::iterator end(void)
		{
			return this->c.end();
		}

		std::stack<T>::container_type::const_iterator start(void) const
		{
			return this->c.begin();
		}

		std::stack<T>::container_type::const_iterator end(void) const
		{
			return this->c.end();
		}

	private:

};

template <typename T>
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i );

#endif /* ***************************************************** MUTANTSTACK_H */