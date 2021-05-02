#include<iostream>

using namespace std;

struct Node
{
	int data;
	struct Node*next;
};

int main()
{
	Node *first;
	Node *x;
	Node *y;
	Node *tail;
	first = new Node();
	x = new Node();
	y = new Node();
	tail = new Node();

	first->data = 5;
	first->next = x;
	x->data = 6;
	x->next = y;
	y->data = 11;
	y->next = tail;
	tail->data = 20;
	tail->next = NULL;


	cout << first->data << endl << first->next << endl << x->data << endl << x->next << endl << y->data << endl << y->next << endl << tail->data << endl << tail->next;

	system("pause");
	return 0;
}