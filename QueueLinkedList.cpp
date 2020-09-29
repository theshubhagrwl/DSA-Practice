#include <iostream>
using namespace std;

class QNode
{
public:
    int data;
    QNode *next;
    QNode(int data)
    {
        data = data;
        next = NULL;
    }
};

class Queue
{
public:
    QNode *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }

    void enqueue(int data);
    void dequeue();
    void print();
};

void Queue ::enqueue(int data)
{
    QNode *newNode = new QNode(data);
    newNode->data = data;
    if (rear == NULL)
    {
        front = rear = newNode;
        // newNode->next = rear;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void Queue ::dequeue()
{
    if (front == NULL)
    {
        cout << "Empty" << endl;
    }
    else
    {
        QNode *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete (temp);
    }
}

void Queue ::print()
{
    QNode *temp = front;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.print();
    q.dequeue();
    q.print();
}
