#include "Stack.h"

Stack::Stack()
{
	myStack = new LinkedList();
}

Stack::~Stack()
{
	delete myStack;
}

int Stack::push(double val)
{
	myStack->addToTail(val);

	return 0;
}

double Stack::pop()
{
	double pop_value = myStack->tail->value;

	myStack->removeFromTail();

	return pop_value;
}

bool Stack::isEmpty()
{
	return (myStack->head == nullptr);
}
