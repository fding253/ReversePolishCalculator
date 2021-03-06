#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
}

LinkedList::~LinkedList()
{
	Node* next;

	while (head != nullptr) 
	{
		next = head->next;
		delete head;
		head = next;
	}

	tail = nullptr;
}

// Add node to end of linked list
int LinkedList::addToTail(double val)
{
	// Create new node
	Node* N = new Node;
	N->value = val;
	N->next = nullptr;
	N->prev = tail;

	if (head == nullptr) 
	{
		// Empty linked list -- set 
		head = N;
		tail = N;
	}
	else
	{
		// Set next pointer for the current tail
		tail->next = N;
		
		// Add new node to the LL
		tail = N;
	}

	return 0;
}

// Remove node from end of linked list
double LinkedList::removeFromTail()
{
	if (head == nullptr) 
	{
		// empty linked list: can't remove
		throw "Empty List";
	}

	Node* old_tail = tail;
	double removed_value = old_tail->value;

	// Move tail tracker
	tail = tail->prev;

	// If LL is now empty, set head to null
	if (tail == nullptr) 
	{
		head = nullptr;
	}

	// Free removed node
	delete old_tail;

	return removed_value;
}
