#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node * leftChild;
    Node * rightChild;

    Node(int value){
        this->data = value;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};

void level_order(Node* root)
{
    if(root == NULL) return;
    cout<<root->data<<" ";
    level_order(root->leftChild);
    level_order(root->rightChild);
}
int main()
{

    int a;
    cin>>a;
    Node * root1 = new Node(a);

    queue<Node * > q;
    q.push(root1);
    while(!q.empty())
    {
        Node * presentRoot = q.front();
        q.pop();
        int leftVal, rightVal;
        cin>>leftVal>>rightVal;

        Node * leftNode = NULL;
        Node * rightNode = NULL;

        if(leftVal!=-1) leftNode = new Node(leftVal);
        if(rightVal !=-1) rightNode = new Node(rightVal);
        presentRoot->leftChild = leftNode;
        presentRoot->rightChild = rightNode;

        if(leftNode!= NULL) q.push(leftNode);
        if(rightNode!= NULL) q.push(rightNode);
    }

    level_order(root1);

  return 0;
}

/*
3
9 20
-1 -1 15 7
-1 -1 -1 -1

3 9 20 15 7
*/

