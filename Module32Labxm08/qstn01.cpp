#include<bits/stdc++.h>
using namespace std;

class treeNode{
public:
    int data;
    treeNode * leftChild;
    treeNode * rightChild;

    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void inOrder(treeNode * root, string &chk) //left root right
{
    if(root == NULL) return ;
    inOrder(root->leftChild,chk);
    chk+= to_string(root->data);
    inOrder(root->rightChild,chk);

}

int main()
{
    int tree1,tree2,value,left, right;

    // input for tree 1
    cout<<"Enter Input for Tree 1: "<<endl;
    cin>>tree1;
    treeNode* allNodes1[tree1];

    for(int i=0; i<tree1; i++)
    {
        allNodes1[i] = new treeNode(-1);
    }



    for(int i = 0; i<tree1; i++)
    {
        cin>>value>>left>>right;
        allNodes1[i]->data = value;
        if(left!=-1){
            allNodes1[i]->leftChild = allNodes1[left];
        }
        if(right!=-1){
            allNodes1[i]->rightChild = allNodes1[right];
        }
    }

    int value2,left2, right2;

    cout<<"Enter Input for Tree 2: "<<endl;
    cin>>tree2;
    treeNode* allNodes2[tree2];

    for(int i=0; i<tree2; i++)
    {
        allNodes2[i] = new treeNode(-1);
    }


    for(int i = 0; i<tree2; i++)
    {
        cin>>value2>>left2>>right2;
        allNodes2[i]->data = value;
        if(left!=-1){
            allNodes2[i]->leftChild = allNodes2[left];
        }
        if(right!=-1){
            allNodes2[i]->rightChild = allNodes2[right];
        }
    }


    //check inOrder value for both tree;
    string chk1 = "";
    inOrder(allNodes1[0],chk1);
    cout<<"tree 1 "<<chk1<<endl;

    string chk2 = "";
    inOrder(allNodes2[0],chk2);
    cout<<"tree 2 "<<chk2;

  return 0;
}

/*
 sample 1: trees are same
input for tree 1
3
1 2 3
2 -1 -1
3 -1 -1

3
0 1 2
1 -1 -1
2 -1 -1
input for tree 2

3
1 2 3
2 -1 -1
3 -1 -1


 sample 2: trees are not same
input for tree 1
2
1 2 -1
2 -1 -1


input for tree 2

2
1 -1 2
2 -1 -1

 sample 3: trees are not same
input for tree 1
3
1 2 1
2 -1 -1
1 -1 -1

input for tree 2

3
1 1 2
1 -1 -1
2 -1 -1


*/

