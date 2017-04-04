#include "Human.hpp"
#include "Brain.hpp"

Human::Human(){
}
Human::~Human(){
}

std::string		Human::identify()
{
	return this->_ins.identify();
}

Brain	&Human::getBrain()
{
	return (this->_ins);
}
