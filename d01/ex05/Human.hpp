#ifndef HUMAN
# define HUMAN
# include "Brain.hpp"
# include <iostream>
class Human
{
private:
	Brain	_ins;

public:
	Brain			&getBrain(void);
	std::string		identify();
	Human();
	~Human();
	
};
#endif
