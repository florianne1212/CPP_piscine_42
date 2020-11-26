#include "Pony.hpp"

#include <iostream>

void
printAddress(Pony *ptr)
{
	int aVariableOnTheStack = 42;
	int *aVariableOnTheHeap = new int(42);

	std::cout << "- local variable   : " << (void *) &aVariableOnTheStack << std::endl;
	std::cout << "- alloced variable : " << (void *) aVariableOnTheHeap << std::endl;
	std::cout << "- given ptr        : " << (void *) ptr << std::endl;

	delete aVariableOnTheHeap;
}


void	ponyOnTheStack(void)
{
	Pony pony_stack("Stack", "brown", "5", "carrots");
	
	pony_stack.tell_name();
	pony_stack.tell_age();
	pony_stack.tell_color();
	pony_stack.tell_favorite_food();

	printAddress(&pony_stack);
}

void	ponyOnTheHeap(void)
{
	Pony *pony_heap = new Pony("Heap", "black", "3", "salad");

	pony_heap->tell_name();
	pony_heap->tell_age();
	pony_heap->tell_color();
	pony_heap->tell_favorite_food();

	printAddress(pony_heap);

	delete pony_heap;
}

int		main(void)
{
	std::cout << "" <<  std::endl;
	std::cout << "_ ponyOnTheStack _" <<  std::endl;
	ponyOnTheStack();
	std::cout << "" <<  std::endl;
	std::cout << "_ ponyOnTheHeap _" <<  std::endl;
	ponyOnTheHeap();
}