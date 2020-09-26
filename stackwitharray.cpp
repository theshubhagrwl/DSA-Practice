#include <iostream>

using namespace std;

#define MAX 100

class Stack
{
public:
    int a[MAX];
    int top = -1;
    bool push(int data);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack ::push(int data)
{
    if (top >= MAX - 1)
    {
        cout << "Stack Overflow" << endl;
        return false;
    }
    else
    {
        ++top;
        a[top] = data;
        return true;
    }
}

int Stack ::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow" << endl;
        return 0;
    }
    else
    {
        int data = a[top];
        --top;
        return data;
    }
}

int Stack ::peek()
{
    if (top < 0)
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return a[top];
    }
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    cout << s.peek() << endl;
    cout << s.pop() << endl;
    cout << s.peek() << endl;
}
