#include<bits/stdc++.h>
using namespace std;
class binTreeNode {
public:
    int data;
    binTreeNode* leftChild;
    binTreeNode* rightChild;

    binTreeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }


};
void printBinTree(binTreeNode * root, int level);
void spacePrint(int level);

/*
pre order:

Root: 1
left:
    root: 2
    left: 4
    right:
        root:5
        left: 8
        right:
right:
    root: 3
    left:
        root: 6
        left: 9
        right: 10
    right: 7

1 2 3
2 -1 -1
3 -1 -1
    root:

*/

void printBinTree(binTreeNode * root, int level)
{
    if(root== NULL) return;


    if(root->leftChild==NULL && root->rightChild== NULL )
    {
        cout<<root->data<<endl;
        return;
    }
    else{
        cout<<endl;
        spacePrint(level);
       cout<<"Root: "<<root->data<<endl;
    }

    if(root->leftChild !=NULL)
    {
        spacePrint(level);
        cout<<"left: ";
        printBinTree(root->leftChild,level+1);

    }
    if(root->rightChild !=NULL)
    {
        spacePrint(level);
        cout<<"Right: ";
        printBinTree(root->rightChild,level+1);

    }


}

void spacePrint(int level)
{
    for(int i = 0; i<level; i++)
    {
        cout<<"   ";
    }
}

int main()
{
    // input node numbers from user
    int numberOfNodes;
    cin>>numberOfNodes;

    binTreeNode * allNodes[numberOfNodes];
    //node data -1;
    for(int i = 0; i<numberOfNodes; i++)
    {
        allNodes[i] = new binTreeNode(-1);
    }

    for(int i = 0; i<numberOfNodes; i++)
    {
        //need three things value, left, right
        int value, left, right;
        cin>>value>>left>>right;
        allNodes[i]->data = value;
        if(left>numberOfNodes-1 || right>numberOfNodes-1)
        {
            cout<<"Invalid Index"<<endl;
            break;
        }
        if(left!=-1)
        {
           allNodes[i]->leftChild = allNodes[left];
        }
        if(right!=-1)
        {
           allNodes[i]->rightChild = allNodes[right];
        }


    }

    //print binary Tree
    printBinTree(allNodes[0],0);

  return 0;
}

/*
pre order root left right
10
0 1 2
1 3 4
2 5 6
3 -1 -1
4 7 -1
5 8 9
6 -1 -1
7 -1 -1
8 -1 -1
9 -1 -1


pre order:

Root: 1
left:
    root: 2
    left: 4
    right:
        root:5
        left: 8
        right:
right:
    root: 3
    left:
        root: 6
        left: 9
        right: 10
    right: 7
*/

