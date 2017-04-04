#ifndef ZOMBIEEVENT
# define ZOMBIEEVENT
# include "Zombie.hpp"
class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	Zombie	*randomChump();

private:
	std::string _type;

};
#endif