#include<bits/stdc++.h>
using namespace std;
class Node{
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
bool isSymmetric(Node * root);
void leftRootRight(Node * root,string &chk);
void rightRootLeft(Node * root,string &chk);

void leftRootRight(Node * root,string &chk){
    if(root==NULL) return ;
    leftRootRight(root->leftChild,chk);
    chk+=to_string(root->data);
    leftRootRight(root->rightChild,chk);
}

void rightRootLeft(Node * root,string &chk)
{
    if(root==NULL) return ;
    rightRootLeft(root->rightChild,chk);
    chk+=to_string(root->data);
    rightRootLeft(root->leftChild,chk);

}

bool isSymmetric(Node * root)
{
    string chk1 = "";
    leftRootRight(root,chk1);
    cout<<"lrr "<<chk1<<endl;
    string chk2 = "";
    rightRootLeft(root, chk2);
    cout<<"rrl "<<chk2<<endl;
    if(chk1 == chk2)
    {
        return true;
    }
    else return false;
}

int main()
{
    int a;
    cin>>a;
    Node * root = new Node(a);
    queue< Node * > q;
    q.push(root);

    while(!q.empty())
    {
        Node * presentRoot = q.front();
        q.pop();

        int leftVal, rightVal;
        cin>>leftVal>>rightVal;

        Node * leftNode = NULL;
        Node * rightNode = NULL;

        if(leftVal!=-1) leftNode = new Node(leftVal);
        if(rightVal!=-1) rightNode = new Node(rightVal);

        presentRoot->leftChild = leftNode;
        presentRoot->rightChild = rightNode;

        if(leftNode!=NULL) q.push(leftNode);
        if(rightNode!=NULL) q.push(rightNode);

    }

    bool value = isSymmetric(root);
    if(value)
    {
        cout<<"This tree is a symmetric tree"<<endl;
        return 0;
    }
    cout<<"This tree is not a symmetric tree";

  return 0;
}

/*
sym
1
2 2
3 4 4 3
-1 -1 -1 -1 -1 -1 -1 -1

not sym
1
2 2
-1 3 -1 3
-1 -1 -1 -1

sym
4
2 7
1 3 6 9
-1 -1 -1 -1 -1 -1 -1 -1

*/

