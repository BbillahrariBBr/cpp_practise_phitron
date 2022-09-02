#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node * leftChild;
    Node * rightChild;

    Node(int value)
    {
        this->data = value;
        this->leftChild = NULL;
        this-> rightChild = NULL;
    }
};

void printInOrder(Node * root, string &chk)
{
    if(root == NULL) return;
    printInOrder(root->leftChild,chk);
    chk+=to_string(root->data);
    printInOrder(root->rightChild,chk);
}

bool isSame(Node * root1, Node * root2)
{
    string chk1 = "";
    printInOrder(root1,chk1);
    string chk2 = "";
    printInOrder(root2, chk2);
    if(chk1 == chk2)
    {
        return true;
    }
    else return false;

}

int main()
{
    cout<< "For first tree: ";
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

//    string chk1 = "";
//    printInOrder(root1,chk1);

    cout<< "For second tree: ";

    int b;
    cin>>b;
    Node * root2 = new Node(a);

    q.push(root2);
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
    bool value = isSame(root1, root2);
    if(value)
    {
        cout<<"Same";
        return 0;
    }
    cout<<"Not Same";


//    string chk2 = "";
//    printInOrder(root2,chk2);
//    cout<<"first root: "<<chk1 <<endl<<"second root: "<<chk2<<endl;
  return 0;
}

