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
        this-> rightChild = NULL;
    }
};

void level_order_reverse(Node * root);
int heigh(Node * root);
void print(Node * root, int level);


void print(Node * root, int level){
    if(root == NULL) return ;
    if(level ==1) cout<<root->data<<" ";
    else if(level>1)
    {
        print(root->leftChild, level-1);
        print(root->rightChild, level-1);
    }
}

int heigh(Node * root){
    if (root== NULL) return 0;
    else{
        int leftHeigh = heigh(root->leftChild);
        int rightHeigh = heigh(root->rightChild);

        if(leftHeigh>rightHeigh) return leftHeigh+1;
        else return rightHeigh+1;
    }
}

void level_order_reverse(Node * root){
    int h = heigh(root);
    for(int i=h; i>=1; i--)
    {
        print(root,i);
    }

}

int main()
{
    int a;
    cin>> a;
    Node * root = new Node(a);
    queue<Node *> q;
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

    level_order_reverse(root);


  return 0;
}

/*
input
3
9 20
-1 -1 15 7
-1 -1 -1 -1


15 7 9 20 3
*/

