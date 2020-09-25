#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

void insertAtStart(Node **head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    if (*head != NULL)
    {
        (*head)->prev = temp;
        temp->next = *head;
    }
    else
    {
        temp->next = NULL;
    }

    *head = temp;
}

void insertAtEnd(Node *head, int data)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtMiddle(Node *head, int data, int n)
{
    Node *temp = head;
    for (int i = 1; i < n && temp; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node();
    newNode->data = data;
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertAtStart(&head, 1);
    insertAtStart(&head, 2);
    insertAtStart(&head, 3);
    printList(head);

    insertAtEnd(head, 4);
    printList(head);

    insertAtMiddle(head, 5, 2);
    printList(head);
}
