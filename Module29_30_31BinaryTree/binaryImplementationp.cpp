#include<bits/stdc++.h>
using namespace std;
class treeNode{
public:
    int data;
    treeNode * leftChild;
    treeNode * rightChild;

    //constractor
    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void printTree(treeNode* root, int level);
void printTree(treeNode* root, int level)
{
    if(root== NULL)
    {
        return;
    }
    cout<<"Root: "<<root->data<<endl;
}
int main()
{
    //node input using user
    int n;
    cin>>n;

    treeNode * allNodes[n];
    //initaillize all Nodes -1

    for(int i =0; i<n; i++)
    {
        allNodes[i]->data = -1;
    }

    //link all nodes
    for(int i =0; i<n; i++)
    {
        //need three things
        /*
        node value, left, right
        */
        int value, left, right;
        cin<<value<<left<<right;

        if(left!=-1)
        {
            allNodes[i]->leftChild = allNodes[left];
        }
        if(right!=-1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }
    }

    printTree(allNodes[0],0);
  return 0;
}

/*
preorder
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 1-1

pre-order print formate
root:0
left:
    root:1
    left:3
    right:4
right:
    root:2
    left:
        root:5
        left:7
        right:8
    right:6
*/
