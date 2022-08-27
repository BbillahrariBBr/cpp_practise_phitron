#include<bits/stdc++.h>
using namespace std;

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
int searchByValueUnique(Node * &head, int key)
{
    Node *temp = head;
    int count = 1;
    if(temp==NULL) return -1;

    while(temp->value!= key)
    {
        if(temp==NULL) return -1;
        temp = temp->Next;
        count++;
    }
    return count;
}

void deletionAtHead(Node * &head)
{
    if(temp!=NULL)
    {
        Node * temp = head;
        head = temp->Next;
        delete temp;
    }
    else{
        cout<<"There is no value in LL";
    }
}

void deletionAtTail(Node * &head){
    Node *temp = head;
    if(temp!= NULL && temp->Next !=NULL)
    {
        while(temp->Next->Next!= NULL)
        {
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next = NULL;
        delete delNode;
    }

    else{
        if(temp == NULL) cout<<"There is no Value";
        else deletionAtHead(head);
    }
}

void deletionSpecificPosition(Node * &head, int pos)
{
    Node * temp = head;
    if(temp!=NULL && pos<=countingLength(head))
    {
        if(pos == 1) deletionAtHead(head);

        else if(pos == countingLength(head)) deletionAtTail(head);
        else{
            int i = 1;
            while(i<pos-1)
            {
                temp = temp->Next;
                i++;
            }
            Node * delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }


    else{
        if(pos>countingLength(head) ) cout<<"position out of Bound";
        else cout<<"There is no value in LL";
    }
}
void deletionByValue(Node * &head, int value)
{
    // find the position of value
    int pos = searchByValueUnique(head, value);
    if(pos == -1) cout<<"Value is not found";
    else deletionSpecificPosition(head, pos)
}

int main()
{

  return 0;
}

