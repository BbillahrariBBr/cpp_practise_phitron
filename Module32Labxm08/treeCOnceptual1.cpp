#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node * leftChild;
    Node * rightChild;

    Node(int value)
    {
        this->data = value;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};

void print(Node * root)
{
    if(root == NULL) return;
    print(root->leftChild);
    cout<<root->data<< endl;
    print(root->rightChild);

}
int main()
{
//    int n;
//    cin>>n;
    int a;

    cin>>a;
    Node * root = new Node(a);

    queue<Node * > q;
    q.push(root);

    while(!q.empty())
    {
        Node * presentRoot = q.front();
        q.pop();
        int leftVal, rightVal;
        cin>>leftVal>>rightVal;

        Node * leftNode = NULL;
        Node * rightNode = NULL;

        if(leftVal != -1) leftNode = new Node(leftVal);
        if(rightVal != -1) rightNode = new Node(rightVal);
        presentRoot->leftChild = leftNode;
        presentRoot->rightChild = rightNode;

        if(leftNode != NULL) q.push(leftNode);
        if(rightNode != NULL) q.push(rightNode);
    }




//    Node * a = new Node(2);
//    Node * b = new Node(3);
//    Node * c = new Node(4);
//    Node * d = new Node(5);
//    Node * e = new Node(6);
//    Node * f = new Node(8);
//    Node * g = new Node(7);
//
//    root->leftChild = a;
//    root->rightChild = b;
//
//    a->leftChild = c;
//
//    b->leftChild = d;
//    b->rightChild = e;
//
//    c->rightChild = f;
//
//    e->rightChild = g;

    print(root);

    return 0;
}

