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

void printTree(treeNode* root, int level);
void spacePrint(int level);
void levelOrderTraversal(treeNode * root, string &chk);
treeNode* buildTreePreIn(int pOrder[], int iOrder[], int start, int end);
int searchInOrder(int iOrder[], int currentValue, int start, int end);

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
void printTree(treeNode* root, int level)
{
    if(root==NULL) //when the tree is empty
    {
        return;
    }
    //case1:
    if(root->leftChild == NULL && root->rightChild == NULL)
    {
        cout<<root->data<<endl;
        return;
    }
    else  //case2
    {
        cout<<endl;
        spacePrint(level);
        cout<<"Root: "<<root->data<<endl;
    }
    if(root->leftChild !=NULL)
    {
        // need recursion in left
        spacePrint(level);
        cout<<"Left: ";
        printTree(root->leftChild,level+1);
    }
    if(root->rightChild!= NULL)
    {
        // need recursion in left
        spacePrint(level);
        cout<<"Right: ";
        printTree(root->rightChild,level+1);
    }


}

void spacePrint(int level)
{
    for(int i = 0; i<level; i++)
    {
        cout<<"   ";
    }
}


void inOrder(treeNode * root, string &chk) //left root right
{
    if(root == NULL) return;
    inOrder(root->leftChild,chk);
    chk+= to_string(root->data);
    inOrder(root->rightChild,chk);
}

void preOrder(treeNode * root, string &chk) //root left right
{
    if(root == NULL) return;
    chk+= to_string(root->data);
    preOrder(root->leftChild,chk);
    preOrder(root->rightChild,chk);
}

void postOrder(treeNode * root, string &chk) //left right root
{
    if(root == NULL) return;
    postOrder(root->leftChild,chk);
    postOrder(root->rightChild,chk);
    chk+= to_string(root->data);
}

int searchInOrder(int iOrder[], int currentValue, int start, int end)
{
    for(int i = start; i<=end; i++)
    {
        if(iOrder[i]==currentValue)
        {
            return i;
        }
    }
    return -1;

}

treeNode* buildTreePreIn(int pOrder[], int iOrder[], int start, int end)
{
    static int id = 0;
    int current = pOrder[id];
    id++;
    treeNode* newNode = new treeNode(current);
    if(start==end)
    {
        return newNode;
    }
    int pos = searchInOrder(iOrder,current, start,end);

    newNode->leftChild = buildTreePreIn(pOrder,iOrder,start,pos-1); // left sub tree;
    newNode->rightChild = buildTreePreIn(pOrder,iOrder,pos+1,end);//right sub Tree;

    return newNode;

}
int main()
{
    //user input
    int n;
    cin>>n;
    int pOrder[n], iOrder[n];
    for(int i =0; i<n; i++)
    {
        cin>>pOrder[i];
    }
    for(int i =0; i<n; i++)
    {
        cin>>iOrder[i];
    }

    treeNode* root = buildTreePreIn(pOrder,iOrder,0,n-1);
    string preOrderTraversal = "";
    preOrder(root,preOrderTraversal);
    cout<<preOrderTraversal<<endl;


    return 0;
}

/*
9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6


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

