#include <iostream>
#include "Stack.h"

Stack::Stack()
{
	count = 0;
	myStack = new LinkedList();
}

Stack::~Stack()
{
	delete myStack;
}

int Stack::push(double val)
{
	myStack->addToTail(val);
	count++;

	return 0;
}

double Stack::pop()
{
	double pop_value;
	if (myStack->tail != nullptr) 
	{
		pop_value = myStack->tail->value;
		count--;
	}

	try 
	{
		myStack->removeFromTail();
	}
	catch (char *msg) 
	{
		//std::cerr << msg << std::endl;
		//std::cout << msg << std::endl;

		throw "No elements in stack";
	}

	return pop_value;
}

bool Stack::isEmpty()
{
	return (myStack->head == nullptr);
}
