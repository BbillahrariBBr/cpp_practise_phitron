#include<bits/stdc++.h>
using namespace std;
// create a box or container for Node using class or structure
class Node{
public:
    int value;
    Node *Next;
    //constructor creation
    Node(int val){
        value = val;
        Next = NULL;
    }
};
void insertAtHead(Node *&head, int val);
void insertAtHead(Node *&head, int val);
void reversedListPrint(Node *head);
void display(Node *n);
int countingLength(Node *&head);

void display(Node *n)
{
    while(n!= NULL)
    {
        cout<<n->value;
        if(n->Next != NULL)
        {
            cout <<"-> ";
        }
        n = n->Next;
    }
    cout<<endl;

}
/*Prints Linked List in reverse order without reversing it.
*/
void reversedListPrint(Node *head) {
    if (head != NULL) {
        reversedListPrint(head->Next);
        cout <<"-> " << head->value;
    }
}

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;

}




void insertAtHead(Node *&head, int val)
{
    //s1: newNode creation
    Node *newNode = new Node(val);
    //s2: update of newNode->next
    newNode->Next = head;
    //s3: update of head(head = newNode)
    head = newNode;

}

int countingLength(Node* &head)
{
    int count = 0;
    Node* temp = head
    while(temp != NULL)
    {
        temp = temp->Next;
        count++;
    }
    return count;
}
int main()
{
    Node *head = NULL;
    int n;
    //choice 1: insertion at Head
    //choice 2: insertion of Tail
    cout<<"choice 1: insertion at Head" <<endl<<"choice 2: insertion at Tail"<<endl;
    int choice = 2;
    while(choice == 1|| choice == 2 )
    {
        cout<<"Enter the value: ";
        cin>>n;
        if(choice == 1) insertAtHead(head, n);
        else if(choice == 2) insertAtTail(head, n);
        cout<<"Next Choice: ";
        cin>>choice;

    }
//    insertAtTail(head,1);
//    insertAtTail(head,2);
//    insertAtTail(head,8);
//    insertAtTail(head,9);
//    Node *second = new Node();
//    Node *third = new Node();
//    Node *fourth = new Node();

    //node value assign
//    head->value =1;
//    second->value =5;
//    third->value =8;
//    fourth->value =9;
//
//    head->Next = second;
//    second->Next = third;
//    third->Next = fourth;
//    fourth->Next = NULL;

    display(head);
    cout<<"reverse print"<<endl;

    reversedListPrint(head);


  return 0;
}

