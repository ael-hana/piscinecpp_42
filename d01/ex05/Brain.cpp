#include "Brain.hpp"
#include <iostream>
#include <sstream>
std::string		Brain::identify(){
	return this->pointer;
}

Brain::Brain() : life(80){
	long long int x = (long long int) this;
	std::stringstream tmp;
	std::stringstream tmp2;
	tmp << x;
	this->pointer = tmp.str();
	tmp.str("");
	tmp.clear();
	tmp << "0x" << std::uppercase << std::hex << this->pointer;
	this->pointer = tmp.str();
}

Brain::~Brain(){

}
