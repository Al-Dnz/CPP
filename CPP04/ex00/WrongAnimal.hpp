#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();
		WrongAnimal &		operator=( WrongAnimal const & rhs );

		std::string		getType(void) const;
		void			makeSound(void) const;

	protected:
		std::string type;

};

#endif