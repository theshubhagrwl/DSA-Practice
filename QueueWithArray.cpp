#include <iostream>
using namespace std;

#define MAX 100

class Queue
{
public:
    int a[MAX];
    int rear, front;
    Queue()
    {
        front = rear = -1;
    }
    void enqueue(int data);
    void dequeue();
    void print();
};

void Queue::enqueue(int data)
{
    if (front == -1)
    {
        front++;
    }
    if (rear == MAX - 1)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        rear++;
        a[rear] = data;
    }
}

void Queue::dequeue()
{
    a[++front];
}

void Queue ::print()
{
    for (int i = front; i <= rear; i++)
    {
        cout << a[i] << " ";
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
