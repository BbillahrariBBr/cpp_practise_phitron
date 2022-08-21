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

Node* reverse(Node* head) {
        if(head==NULL || head->next==NULL)
            return head;

        Node* temp=reverse(head->next);
        Node* newHead=temp;
        while(temp->next!=NULL)temp=temp->next;
        temp->next=head;
        head->next=NULL;
        return newHead;
    }



Node* reverseKNodes(Node* head, int k) {
        if(k==0 || head==NULL || head->next==NULL)
            return head;

        int cnt=k-1;
        Node* tmp=head;
        while(cnt && tmp->next!=NULL){
            tmp=tmp->next;
            cnt--;
        }
        if(cnt!=0)
            return head;
         Node* t=reverseKNodes(tmp->next,k);
        tmp->next=NULL;
         Node* newHead=reverse(head);
        tmp=newHead;
        while(tmp->next!=NULL)
            tmp=tmp->next;
        tmp->next=t;
        return newHead;


    }

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

        insertLL(head,value);

    }
    int k;
    cin >>k;
    Node *newHead = reverseKNodes(head,k);

    display(newHead);


  return 0;
}


