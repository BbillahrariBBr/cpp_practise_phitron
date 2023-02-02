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
    print(root);

  return 0;
}

/*
0
1 2
3 -1 -1 4
-1 -1 -1 -1
*/


