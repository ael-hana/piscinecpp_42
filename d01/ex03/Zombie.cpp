#include "Zombie.hpp"

void	Zombie::announce(){
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..."<<  std::endl;
}

Zombie::Zombie(){
	std::string NameArray[10] = { "budz", "pain", "konan", "nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi" };

	this->_type = "Zaz";
	this->_name = NameArray[clock() % 10];
}

Zombie::~Zombie(){
	std::cout << "I am dead" << std::endl;
}