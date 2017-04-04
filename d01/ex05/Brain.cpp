#include "Brain.hpp"
#include <iostream>
#include <string>
void	Brain::identify(){
	long long int x = (long long int) this;
	std::cout << "0x" << std::hex << std::uppercase << x << std::endl;
}

Brain::Brain(){

}

Brain::~Brain(){

}