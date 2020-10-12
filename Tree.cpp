#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void preOrderItr(Node *root)
{
    if (root == NULL)
        return;
    else
    {
        stack<Node *> nodeStack;
        nodeStack.push(root);
        Node *temp = root;
        while (!nodeStack.empty())
        {
            Node *temp = nodeStack.top();
            cout << temp->data << " ";
            nodeStack.pop();
            if (temp->right)
                nodeStack.push(temp->right);
            if (temp->left)
                nodeStack.push(temp->left);
        }
    }
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void postOrderItr(Node *root)
{
    if (!root)
        return;
    else
    {
        stack<Node *> stackNode;
        Node *temp = root;
        while (!stackNode.empty() || temp != NULL)
        {
            while (temp != NULL)
            {
                stackNode.push(temp);
                temp = temp->left;
            }
            if (stackNode.top()->right == NULL)
            {
                Node *temp2 = stackNode.top();
                stackNode.pop();
                cout << temp2->data << " ";
                while (!stackNode.empty() && stackNode.top()->right == temp2)
                {
                    temp2 = stackNode.top();
                    cout << temp2->data << " ";
                    stackNode.pop();
                }
            }
            else
            {
                temp = stackNode.top()->right;
            }
        }
    }
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void inOrderItr(Node *root)
{
    if (!root)
        return;
    else
    {
        stack<Node *> stackNode;
        Node *temp = root;
        while (!stackNode.empty() || temp != NULL)
        {
            while (temp != NULL)
            {
                stackNode.push(temp);
                temp = temp->left;
            }
            temp = stackNode.top();
            cout << temp->data << " ";
            stackNode.pop();
            temp = temp->right;
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "preorder" << endl;
    preOrderItr(root);
    cout << "inorder" << endl;
    inOrderItr(root);
    cout << "postorder" << endl;
    postOrderItr(root);
}
