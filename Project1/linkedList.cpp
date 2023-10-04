#include <iostream>
#include <string>

using namespace std;

struct Node
{
	int number;
	string name;

	Node* nextNode = NULL;

	Node(int number, string name) { this->number = number, this->name = name; };
	Node setData(int number, string name) { this->number = number, this->name; };
};

Node* linkedList(Node* head)
{
	cout << "Data of head link: ";

	int number; string name;
	cin >> number >> name;
	head = new Node(number, name);

	return head;
}

void expendingList(Node* head, int quantity)
{
	Node* temp = head;

	for (int i = 0; i < quantity; i++)
	{
		cout << "Data of " << i + 1 << " node: ";
		int number; string name;
		cin >> number >> name;

		temp->nextNode = new Node(number, name);
		temp = temp->nextNode;
		temp->nextNode = NULL;
	}
}

void printList(Node* head)
{
	while (true == true)
	{
		cout << "Number of node: " << head->number << " Name of node: " <<  head->name << endl;
		
		if (head->nextNode != NULL) { head = head->nextNode; }
		else { return; }
	}
}

int main()
{
	Node* newLinkedList = linkedList(newLinkedList);
	printList(newLinkedList);
	expendingList(newLinkedList, 2);
	printList(newLinkedList);

	return 0;
}