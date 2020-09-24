#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void pushNode(Node **head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = *head;
    Node *ptr = *head;
    if (*head != NULL)
    {
        while (ptr->next != *head)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
    else
    {
        temp->next = temp;
    }
    *head = temp;
}

void pushAtEnd(Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    Node *itr = new Node();
    itr = head;
    do
    {
        itr = itr->next;
    } while (itr->next != head);

    itr->next = temp;
}

void printList(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main()
{
    Node *head = NULL;
    // head->next = NULL;
    // head->data = 1;

    pushNode(&head, 2);
    pushNode(&head, 3);
    pushNode(&head, 4);
    printList(head);
    pushAtEnd(head, 11);
    printList(head);
}
