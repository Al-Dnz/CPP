#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class A: public Base
{

	public:
		A(){std::cout << "An instance of class A has been created" << std::endl;};
		~A(){};

	private:

};

#endif /* *************************************************************** A_H */