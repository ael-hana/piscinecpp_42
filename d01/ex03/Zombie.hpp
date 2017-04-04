#ifndef ZOMBIE
# define ZOMBIE
# include <iostream>
class Zombie
{
private:
	std::string _type;
	std::string	_name;

public:
	Zombie();
	~Zombie();
	void	announce();

};
#endif