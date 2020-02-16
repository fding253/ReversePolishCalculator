#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

class Stack
{
public:
	Stack();
	~Stack();
	LinkedList* myStack;
	int count;

	int push(double);
	double pop();
	bool isEmpty();
};


#endif // !STACK_H
