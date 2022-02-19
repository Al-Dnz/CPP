#ifndef C_HPP
# define C_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class C: public Base
{

	public:
		C();
		~C();
		C( C const & src );
		C &		operator=( C const & rhs );

	private:

};

#endif /* *************************************************************** C_H */