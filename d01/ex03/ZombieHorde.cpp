#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n){
	this->_n = n;
	this->ptr = new Zombie[n];
}

ZombieHorde::~ZombieHorde(){
	delete [] this->ptr;
}
void 	ZombieHorde::announce(){
	for (int i = 0; i < this->_n; i++)
	{
		this->ptr[i].announce();
	}
}