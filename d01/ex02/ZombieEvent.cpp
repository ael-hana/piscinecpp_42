#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <ctime>

ZombieEvent::ZombieEvent(){
	this->_type = "Default";
}

ZombieEvent::~ZombieEvent(){
	return;
}

void		ZombieEvent::setZombieType(std::string type){
	this->_type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name){
	return new Zombie(name, this->_type);
}

Zombie		*ZombieEvent::randomChump(){
	std::string NameArray[10] = { "budz", "pain", "konan", "nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi" };

	Zombie *ptr;
	ptr = new Zombie(this->_type, NameArray[clock() % 10]);
	ptr->announce();
	return ptr;
}
std::string type;