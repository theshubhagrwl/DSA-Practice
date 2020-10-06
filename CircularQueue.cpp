#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Queue
{
public:
    Node *front, *rear;
};

void enQueue(Queue *q, int data)
{
    Node *temp = new Node();
    temp->data = data;
    if (q->front == NULL)
    {
        q->front = temp;
    }
    else
    {
        q->rear->next = temp;
    }
    q->rear = temp;
    q->rear->next = q->front;
}

int deQueue(Queue *q)
{
    if (q->front == NULL)
    {
        cout << "Empty" << endl;
        return INT8_MIN;
    }
    int value;
    if (q->front == q->rear)
    {
        value = q->front->data;
        free(q->front);
        q->front = NULL;
        q->rear = NULL;
    }
    else
    {
        Node *temp = q->front;
        value = temp->data;
        q->front = q->front->next;
        q->rear->next = q->front;
        free(temp);
    }
    return value;
}

void display(Queue *q)
{
    Node *temp = q->front;
    printf("\nElements in Circular Queue are: ");
    while (temp->next != q->front)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}

int main()
{
    Queue *q = new Queue();
    q->front = q->rear = NULL;
    enQueue(q, 10);
    enQueue(q, 20);
    enQueue(q, 30);
    display(q);
    deQueue(q);
    display(q);
}
