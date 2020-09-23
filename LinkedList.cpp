#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void insertAtEnd(Node *head, int data)
{
	while (head)
	{
		if (head->next == NULL)
		{
			Node *newNode = new Node();
			newNode->data = data;
			newNode->next = NULL;
			head->next = newNode;
			break;
		}
		head = head->next;
	}
}

void insertAtStart(Node **head, int data)
{
	Node *newNode = new Node();
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}

void insertAtMid(Node **head, int data, int n)
{
	Node *temp = new Node();
	temp = *head;
	while (temp && n--)
	{
		temp = temp->next;
	}
	Node *newNode = new Node();
	newNode->next = temp->next;
	newNode->data = data;
	temp->next = newNode;
}

int main()
{
	Node *head = new Node();
	head = NULL;

	insertAtStart(&head, 1);
	printList(head);

	insertAtEnd(head, 2);
	insertAtEnd(head, 3);
	printList(head);

	insertAtEnd(head, 5);
	printList(head);

	insertAtStart(&head, 0);
	printList(head);

	insertAtMid(&head, 11, 3);
	printList(head);
}
