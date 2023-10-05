#include <iostream>

using namespace std;

class Node
{
public:
	int key;
	int value;
	Node *left = NULL, *right = NULL;

	void add(Node root, int key, int value) {};

	Node(int key, int value) { this->key = key, this->value = value; };
};

void Node::add(Node root, int key, int value)
{
	Node temp = root;
	while (true)
	{
		
	}
}

int main()
{
	Node root(10, 15);

	return 0;
}