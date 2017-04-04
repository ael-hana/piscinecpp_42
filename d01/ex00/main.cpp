#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap(){
	Pony *nintendo = new Pony;
	nintendo->walking();
	delete nintendo;
}

void	ponyOnTheStack(){
	Pony 	ptr;
	ptr.walking();
}

int		main(void){
	ponyOnTheStack();
	ponyOnTheHeap();
}