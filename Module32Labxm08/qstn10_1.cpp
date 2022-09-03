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

vector<int> res;

void inOrder(Node * root){
    if(root==NULL) return ;
    inOrder(root->leftChild);
    res.push_back(root->data);
    inOrder(root->rightChild);
}
int second_minimum(Node* root)
{
    inOrder(root);
    sort(res.begin(),res.end());
    for(int i =0; i<res.size()-1; i++)
    {
        if(res[i]!= res[i+1]) return res[i+1];
    }
    return -1;
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
    int secondMinimum = second_minimum(root);
    cout<<secondMinimum<<endl;

    return 0;
}
/*

2
2 5
-1 -1 5 7
-1 -1 -1 -1

2
2 2
-1 -1 -1 -1

*/
