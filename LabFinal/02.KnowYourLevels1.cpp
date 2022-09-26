#include<bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode* leftChild;
    treeNode* rightChild;

    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};


int main()
{
    //user input
    int n,e;
    cin>>n>>e;
    treeNode* allNodes[n];
    //initally all nodes value set -1;
    for(int i=0; i<n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }

  return 0;
}
