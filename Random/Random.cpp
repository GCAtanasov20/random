#include <iostream>
using namespace std;
class LinkedList
{
private:
	struct Node
	{
		int data;
		Node* next;
		Node* prev;
	};
	Node* head, * tail;
public:
	LinkedList();
	bool add(int val);
	void print() const;

};
LinkedList::LinkedList()
{

}


bool LinkedList::add(int val)
{
	Node* newNode;

	newNode = new Node;  //Creates new node
	newNode->data = val; //Stores val
	newNode->next = nullptr;


	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode; //Insert new node at the end of the list
		tail = newNode;
	}


	return head;
}


void LinkedList::print() const
{
	Node* current;

	current = head;

	while (current != nullptr)
	{
		cout << current->data << " " << endl;
		current = current->next;
	}
}
int main()
{
	LinkedList aList;

	int c;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		int x;
		cin >> x;
		aList.add(x);
	}
	aList.print();

	system("pause");
	return 0;
}