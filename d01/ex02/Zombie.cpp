#include "Zombie.hpp"

void	Zombie::announce(){
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..."<<  std::endl;
}

Zombie::Zombie(std::string type, std::string name){
	this->_type = type;
	this->_name = name;
}

Zombie::~Zombie(){
	std::cout << "I am dead" << std::endl;
}