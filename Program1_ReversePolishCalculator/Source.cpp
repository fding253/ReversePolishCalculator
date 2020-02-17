#include <iostream>
#include "assert.h"
#include "LinkedList.h"
#include "Stack.h"
#include "ReversePolishCalculator.h"


int main() {
	// ======== RUN REVERSE POLISH CALCULATOR ========
	ReversePolishCalculator* rp = new ReversePolishCalculator();

	/* ======== SAMPLE OUTPUT ========
	10 15 + =
	25
	10 15 - =
	-5
	2.5 3.5 + =
	6
	10 0 / =
	Error: Division by zero
	10 20 * / =
	Error : Too many operators
	12 20 30 / =
	Error : Too many operands
	-10 -30 - =
	20
	100 10 50 25 / * - -2 / =
	-40

	*/
}


void TestLL()
{
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
}

void TestStack()
{
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
}