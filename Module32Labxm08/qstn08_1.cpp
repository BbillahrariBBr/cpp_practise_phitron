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

 void average_level(Node* root)
 {
     if(root== NULL) return;
     queue<Node * >q;
     q.push(root);
     while(!q.empty())
     {
         int sum = 0;
         int total = 0;
         queue<Node * > temp;
         while (!q.empty())
         {
            Node *curr = q.front();
            q.pop();

            sum += curr->data;

            total++;

            if (curr->leftChild != NULL) temp.push(curr->leftChild);
            if (curr->rightChild != NULL) temp.push(curr->rightChild);
        }
        double average = (double) sum / (double) total;
        cout << fixed << setprecision(1) << average<<" ";
        q = temp;
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
    average_level(root);

    return 0;
}
/*

3
9 20
-1 -1 15 7
-1 -1 -1 -1

2
2 2
-1 -1 -1 -1

*/

