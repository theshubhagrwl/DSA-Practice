#include <iostream>

using namespace std;

class StackNode
{
public:
    int data;
    StackNode *next;
};

void push(StackNode **top, int data)
{
    StackNode *newNode = new StackNode();
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

void pop(StackNode **top)
{
    StackNode *newNode = *top;
    cout << newNode->data << endl;
    *top = (*top)->next;
    free(newNode);
}

void peek(StackNode *top)
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << top->data << endl;
    }
}

int main()
{
    StackNode *s = NULL;
    push(&s, 10);
    push(&s, 20);
    pop(&s);
    peek(s);
}
