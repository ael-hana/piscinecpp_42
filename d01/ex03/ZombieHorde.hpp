#ifndef ZOMBIEHORDE
# define ZOMBIEHORDE
#include "Zombie.hpp"
class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void	announce();

private:
	Zombie *ptr;
	int		_n;
};
#endif