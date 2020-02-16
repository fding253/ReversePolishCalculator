#include <iostream>
#include "assert.h"
#include "LinkedList.h"
#include "Stack.h"
#include "ReversePolishCalculator.h"


int main() {
	// ============ TESTING LINKED LIST ===================
	//LinkedList* ll = new LinkedList();

	//ll->addToTail(1);
	//std::cout << "head " << ll->head->value << std::endl;
	//std::cout << "tail " << ll->tail->value << std::endl;

	//ll->addToTail(2.5);

	//std::cout << "head " << ll->head->value << std::endl;
	//std::cout << "tail " << ll->tail->value << std::endl;

	//ll->addToTail(5.6);

	//std::cout << "head " << ll->head->value << std::endl;
	//std::cout << "tail " << ll->tail->value << std::endl;

	//ll->removeFromTail();

	//std::cout << "head " << ll->head->value << std::endl;
	//std::cout << "tail " << ll->tail->value << std::endl;


	// ============ TESTING STACK ===================
	//double x;
	//Stack* s = new Stack();
	//s->push(1);
	//x = s->pop();

	//std::cout << "popped " << x << std::endl;

	//s->push(2);
	//s->push(3);
	//x = s->pop();
	//std::cout << "popped " << x << std::endl;
	//x = s->pop();
	//std::cout << "popped " << x << std::endl;
	////x = s->pop();
	////std::cout << "popped " << x << std::endl;


	// ======== TESTING REVERSE POLISH CALCULATOR ========
	ReversePolishCalculator* rp = new ReversePolishCalculator();
}