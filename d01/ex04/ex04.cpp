#include <iostream>
int		main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;
	std::cout << *ptr << " " << ref << std::endl;
	return (0);
}