#include<bits/stdc++.h>
using namespace std;

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
void insertSpecificPosition(Node * &head, int pos, int value)
{
    int i =0;
    Node * temp = head;
    while(i<pos-2)
    {
        temp= temp->Next;
        i++;
    }
    Node *newNode = new Node(value);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}

void insertionAfterSpecificValue(Node * &head, int afterValue, int value)
{

    // search the position of value
    int position;
    position = searchByValueUnique(head, afterValue)
    //insert the value at the position+1
    insertSpecificPosition(head, position+1, value);
}

int main()
{

  return 0;
}

