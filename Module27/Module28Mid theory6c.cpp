#include<bits/stdc++.h>
using namespace std;

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->Next != head)
    {
        temp = temp->Next;
    }
    newNode->Next = head; // newNode-> Next = temp->Next
    temp->Next = newNode;

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

void createCircular(Node * &head)
{
    Node* temp = head
    while(temp != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = head;
}
int main()
{

  return 0;
}

