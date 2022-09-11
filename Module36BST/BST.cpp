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
void boundaryTraversal(treeNode* root);
void printLeaves(treeNode* root);
void printLeftNonLeaves(treeNode* root);
void printRightNonLeaves(treeNode* root);

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


//module31 level order traversal
//void levelOrderTraversal(treeNode * root, string &chk,int kthLevel)
//{
//    if(root == NULL)
//    {
//        return;
//    }
//    queue<treeNode*> q;
//    //step 1 push root and NULL
//    int level = 0
//    q.push(root);
//    q.push(NULL);
//
//    while(!q.empty())
//    {
//        treeNode* chkNode = q.front();
//        q.pop();
//        if(chkNode!= NULL)
//        {
//            cout<<chkNode->data<<" ";
//            chk+= to_string(chkNode->data);
//            if(chkNode->leftChild!=NULL)
//            {
//                q.push(chkNode->leftChild);
//            }
//            if(chkNode->rightChild!=NULL)
//            {
//                q.push(chkNode->rightChild);
//            }
//        }
//        else{
//            if(!q.empty()){
//                q.push(NULL);
//                level++;
//            }
//
//        }
//    }
//}
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
void inOrder(treeNode * root, string &chk) //left root right
{
    if(root == NULL) return;
    inOrder(root->leftChild,chk);
    chk+= (to_string(root->data)+" ");
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

void printLeaves(treeNode* root)
{
    if(root ==NULL) return;
    if(root->leftChild==NULL && root->rightChild == NULL)
    {
        cout<<root->data<<" ";
        return;
    }
    printLeaves(root->leftChild);

    printLeaves(root->rightChild);

}
void printLeftNonLeaves(treeNode *root)
{
    if(root ==NULL) return;
    if(root->leftChild!=NULL)
    {
        cout<<root->data<<" ";
        printLeftNonLeaves(root->leftChild);
    }
    else if(root->rightChild!=NULL)
    {
        cout<<root->data<<" ";
        printLeftNonLeaves(root->rightChild);
    }

}
void printRightNonLeaves(treeNode *root)
{
    if(root ==NULL) return;
     if(root->rightChild!=NULL)
    {
        cout<<root->data<<" ";
        printRightNonLeaves(root->rightChild);
    }
    else if(root->leftChild!=NULL)
    {
        cout<<root->data<<" ";
        printRightNonLeaves(root->leftChild);
    }

}
//boundary traversal module 31
void boundaryTraversal(treeNode *root)
{
    if(root ==NULL)
        return;

    cout<<root->data<<" ";
    // LB non-leaves
    printLeftNonLeaves(root->leftChild);
    //LB leaves
    printLeaves(root->leftChild);
    //RB leaves
    printLeaves(root->rightChild);
    //Rb non-Leaves
    printRightNonLeaves(root->rightChild);

}

treeNode* insertionBST(treeNode* root, int value)
{
    treeNode* newNode = new treeNode(value);
    if(root == NULL)
    {
        root = newNode;
        return root;
    }
    //value < root->value
    if(value <root->data)
    {
        root->leftChild = insertionBST(root->leftChild,value);
    }
    //value >root->value
    else if(value> root->data)
    {
        root->rightChild = insertionBST(root->rightChild,value);
    }
    return root;

}
int main()
{
    //user input
    int n;
    cin>>n;
    treeNode *root = NULL;
    for(int i = 0; i<n; i++)
    {
        int value;
        cin>>value;
        root = insertionBST(root, value);
    }
    string res = "";
    inOrder(root, res);
    cout<<res;


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
