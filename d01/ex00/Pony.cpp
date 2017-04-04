#include "Pony.hpp"
#include <iostream>

Pony::Pony(){
	std::cout << "Hello world i am a pony" << std::endl;
}

Pony::~Pony(){
	std::cout << "I am dead :(" << std::endl;
}

void	Pony::walking(){
	std::cout << "I walking" << std::endl;
}
void	Pony::gotorestroom(){
	std::cout << "It's fun for me :)" << std::endl;
}