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

void inOrder(Node * root,string &chk){
    if(root==NULL) return ;
    inOrder(root->leftChild,chk);
    chk+=to_string(root->data);
    inOrder(root->rightChild,chk);
}

Node * invert_tree(Node* root)
{
    if (root == NULL) {
        return root;
    }
    swap(root->leftChild, root->rightChild);

    invert_tree(root->leftChild);
    invert_tree(root->rightChild);

    return root;
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
    string chk1 = "";
    string chk2 = "";
    inOrder(root,chk1);
    cout<<chk1<<endl;
    Node * root1 = invert_tree(root);
    inOrder(root1,chk2);
    cout<<chk2;

    return 0;
}
/*

4
2 7
1 3 6 9
-1 -1 -1 -1 -1 -1 -1 -1

9764321

*/
