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
void inOrder(Node * root, string &chk) //left root right
{
    if(root == NULL) return;
    inOrder(root->leftChild,chk);
    chk+= to_string(root->data)+ " ";
    inOrder(root->rightChild,chk);
}
void preOrder(Node * root, string &chk) //root left right
{
    if(root == NULL) return;
    chk+= to_string(root->data)+ " ";
    preOrder(root->leftChild,chk);
    preOrder(root->rightChild,chk);
}

void postOrder(Node * root, string &chk) //left right root
{
    if(root == NULL) return;
    postOrder(root->leftChild,chk);
    postOrder(root->rightChild,chk);
    chk+= to_string(root->data) + " ";
}

int levelOrderTraversal(Node * root, string &chk,int kthLevel)
{
    if(root == NULL)
    {
        return -1;
    }
    queue<Node*> q;
    //step 1 push root and NULL
    int level = 0;
    q.push(root);
    q.push(NULL);
    int max = -9999;

    while(!q.empty())
    {
        Node* chkNode = q.front();
        q.pop();
        if(chkNode!= NULL)
        {
            if(level == kthLevel)
            {
                if(max<chkNode->data)
                {
                    max = chkNode->data;
                }
            }
            cout<<chkNode->data<<" ";
            chk+= to_string(chkNode->data);
            if(chkNode->leftChild!=NULL)
            {
                q.push(chkNode->leftChild);
            }
            if(chkNode->rightChild!=NULL)
            {
                q.push(chkNode->rightChild);
            }
        }
        else
        {
            if(!q.empty())
            {
                q.push(NULL);
                level++;
            }

        }
    }
    return max;
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

//    print(root);
    string inOrderTraversal = "";
    inOrder(root,inOrderTraversal);
    cout<<"Inorder: "<<inOrderTraversal<<endl;

    string preOrderTraversal = "";
    preOrder(root,preOrderTraversal);
    cout<<"Preorder: "<<preOrderTraversal<<endl;

    string postOrderTraversal = "";
    postOrder(root,postOrderTraversal);
    cout<<"Postorder: "<<postOrderTraversal<<endl;

    string levOrderTraversal = "";
    cout<<"level Order: ";
    int maxVlaueK = levelOrderTraversal(root,levOrderTraversal,3);

    cout<<endl<<"kth max "<<maxVlaueK<<endl<<endl;

    return 0;
}

/*
15
11 26
8 12 20 30
6 9 -1 14 -1 -1 -1 35
-1 -1 -1 -1 -1 -1 -1 -1

*/

