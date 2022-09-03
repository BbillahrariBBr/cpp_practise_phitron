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


void level(Node * root, int lvl, int leftTurn)
{
    if (root == NULL)
        return;
    if (lvl == 1)
        cout << root->data << " ";
    else if (lvl > 1)
    {
        if (leftTurn)
        {
            level(root->leftChild,lvl - 1, leftTurn);
            level(root->rightChild,lvl - 1, leftTurn);
        }
        else
        {
            level(root->rightChild,lvl - 1, leftTurn);
            level(root->leftChild,lvl - 1, leftTurn);
        }
    }
}


int height(Node * root)
{
    if (root == NULL)
        return 0;
    else
    {
        int left = height(root->leftChild);
        int right = height(root->rightChild);
        if (left > right)
            return (left + 1);
        else
            return (right + 1);
    }
}


void zigzag_order(Node * root)
{
    int h = height(root);
    bool leftTurn = true;
    for(int i = 1; i <= h; i++)
    {
        level(root, i, leftTurn);
        leftTurn = !leftTurn;
    }
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

    zigzag_order(root);

    return 0;
}
/*

3
9 20
-1 -1 15 7
-1 -1 -1 -1

3
9 20
5 6 15 7
-1 -1 -1 -1 -1 -1 -1 -1


*/

