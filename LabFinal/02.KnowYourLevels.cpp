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

int levelOrderTraversal(treeNode * root, string &chk,int kthLevel)
{
    if(root == NULL)
    {
        return -1;
    }
    queue<treeNode*> q;
    //step 1 push root and NULL
    int level = 0;
    q.push(root);
    q.push(NULL);
    int max = -9999;

    while(!q.empty())
    {
        treeNode* chkNode = q.front();
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



    string levOrderTraversal = "";
    int maxVlaueK = levelOrderTraversal(allNodes[0],levOrderTraversal,2);
    cout<<"level Order: "<<levOrderTraversal<<endl;

    cout<<endl<<"kth max "<<maxVlaueK<<endl<<endl;

    return 0;
}
