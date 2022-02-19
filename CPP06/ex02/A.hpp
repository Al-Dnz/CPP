#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class A: public Base
{

	public:
		A();
		~A();
		A( A const & src );
		A &		operator=( A const & rhs );

	private:

};

#endif /* *************************************************************** A_H */