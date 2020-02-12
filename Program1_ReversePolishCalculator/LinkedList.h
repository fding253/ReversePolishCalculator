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
	int removeFromTail();
};

