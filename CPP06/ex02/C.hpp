#ifndef C_HPP
# define C_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class C: public Base
{

	public:
		C(){std::cout << "An instance of class C has been created" << std::endl;};
		~C(){};

	private:

};

#endif /* *************************************************************** C_H */