#include <iostream>
#include "LinkedList.h"


int main() {
	LinkedList* ll = new LinkedList();

	ll->addToTail(1);
	std::cout << "head " << ll->head->value << std::endl;
	std::cout << "tail " << ll->tail->value << std::endl;

	ll->addToTail(2.5);

	std::cout << "head " << ll->head->value << std::endl;
	std::cout << "tail " << ll->tail->value << std::endl;

	ll->addToTail(5.6);

	std::cout << "head " << ll->head->value << std::endl;
	std::cout << "tail " << ll->tail->value << std::endl;

	ll->removeFromTail();

	std::cout << "head " << ll->head->value << std::endl;
	std::cout << "tail " << ll->tail->value << std::endl;


}