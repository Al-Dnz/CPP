#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class B: public Base
{

	public:
		B();
		~B();
		B( B const & src );
		B &operator=( B const & rhs );

	private:

};

#endif /* *************************************************************** B_H */