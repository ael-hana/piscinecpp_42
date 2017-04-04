#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int 	main(void)
{
	Zombie stackzombie("CHITANE", "Rodeur");
	stackzombie.announce();
	
Zombie *zomb = new Zombie("blurg", "fat");
zomb->announce();
ZombieEvent *zomb2 = new ZombieEvent();
zomb2->setZombieType("Boloss");
delete zomb;
zomb = zomb2->randomChump();
zomb->announce();
delete zomb;
zomb = zomb2->newZombie("New");
zomb->announce();

delete zomb;
delete zomb2;


	return 0;
}