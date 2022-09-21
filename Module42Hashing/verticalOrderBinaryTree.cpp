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



/*
root: 0
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



void verticalOrder(treeNode* root, int D, map<int, vector<int>> &M)
{
    if(root == NULL) return;
    M[D].push_back(root->data);
    verticalOrder(root->leftChild,D-1,M);
    verticalOrder(root->rightChild,D+1,M);
}
int main()
{
    //user input
    int n;
    cin>>n;
    treeNode* allNodes[n];
    //initally all nodes value set -1;
    for(int i=0; i<n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }

    //link join
    for(int i =0; i<n; i++)
    {
        //3 jinis nite hobe
        int value, left, right;
        cin>>value>>left>>right;
        allNodes[i]->data =value;
        if(left>n-1 || right>n-1)
        {
            cout<<"Invalid Index"<<endl;
            break;
        }

        if(left!=-1)
        {
            allNodes[i]->leftChild= allNodes[left];
        }
        if(right!=-1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }
    }



    map<int,vector<int>> M;
    verticalOrder(allNodes[0],0,M);
//    map<int,vector<int>> :: iterator it;
//    for(it = M.begin(); it!=M.end(); it++)
//    {
//        for(int i = 0; i<(it->))
//    }
    for(auto i:M)
    {
        cout<<i.first<<" : ";
        for(int j = 0; j<(i.second).size();j++)
        {
            cout<<(i.second)[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
node
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1

3
1 2 3
2 -1 -1
3 -1 -1

preorder

root: 0
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
inorder

postorder

Inorder: 314075826
Preorder: 013425786
Postorder: 341785620
*/
