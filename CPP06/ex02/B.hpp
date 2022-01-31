#ifndef B_HPP
# define B_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class B: public Base
{

	public:
		B(){std::cout << "An instance of class B has been created" << std::endl;};
		~B(){};

	private:

};

#endif /* *************************************************************** B_H */