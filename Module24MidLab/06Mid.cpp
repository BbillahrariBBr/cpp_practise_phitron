#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }

};

void insertLL(Node *&head, int value)
{

    Node *newNode = new Node(value);
    if(head == NULL)
    {
        head=newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp= temp->next;
    }
    temp->next = newNode;
}

void display(Node *n)
{
    while(n!= NULL)
    {
        cout<<n->value;
        if(n->next!= NULL)
        {
            cout<<"-> ";
        }
        n = n->next;
    }
    cout<<endl;
}


int main()
{
    Node *head = NULL;
    int n;
    cin>>n;
    int value;
    for(int i = 0; i<n; i++)
    {
        cin>>value;
        if(value%2==0)
        {
            value = -1;
        }
        insertLL(head,value);

    }
    display(head);


  return 0;
}

