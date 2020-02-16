#ifndef LINKEDLIST_H
#define LINKEDLIST_H


struct Node
{
	double value;
	Node* next;
	Node* prev;
};

class LinkedList
{
public:
	Node* head;
	Node* tail;

	LinkedList();
	~LinkedList();

	int addToTail(double);
	double removeFromTail();
};


#endif // !LINKEDLIST_H