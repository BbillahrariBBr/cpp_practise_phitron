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

/*Function protoypes*/
void printGivenLevel(Node* root, int level);
int height(Node* node);

/* Function to print REVERSE
level order traversal a tree*/
void reverseLevelOrder(Node* root)
{
    int h = height(root);
    int i;
    for (i=h; i>=1; i--) //THE ONLY LINE DIFFERENT FROM NORMAL LEVEL ORDER
        printGivenLevel(root, i);
}

/* Print nodes at a given level */
void printGivenLevel(Node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1)
    {
        printGivenLevel(root->leftChild, level - 1);
        printGivenLevel(root->rightChild, level - 1);
    }
}

/* Compute the "height" of a tree -- the number of
    nodes along the longest path from the root node
    down to the farthest leaf node.*/
int height(Node* node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(node->leftChild);
        int rheight = height(node->rightChild);

        /* use the larger one */
        if (lheight > rheight)
            return(lheight + 1);
        else return(rheight + 1);
    }
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

    reverseLevelOrder(root1);

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
