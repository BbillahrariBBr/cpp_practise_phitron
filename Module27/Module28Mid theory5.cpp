#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node * next;
    Node * prev;

    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};
int main()
{
    Node * head = new Node(12); //p
    Node * q = new Node(16); //q
    Node * temp = new Node(28); //r
    Node * s = new Node(25); //s
    Node * last = new Node(53); //t


    head->next = q;

    q->prev =head;
    q->next = temp;

    temp->prev = q;
    temp->next = s;

    s->prev =temp;
    s->next = last;

    last->prev = s;

    cout<<"head val: "<<head->val<<endl;
    //cout<<"head next: "<<head->next<<endl;
    cout<<"head next val: "<<head->next->val<<endl;
    cout<<"head next next val: "<<head->next->next->val<<endl;

    cout<<"last val "<<last->val<<endl;
    cout<<"last prev val "<<last->prev->val<<endl;
    cout<<"last prev next val "<<last->prev->next->val<<endl;

    cout<<"temp prev prev val "<<temp->prev->prev->val<<endl;
    cout<<"temp prev prev prev "<<temp->prev->prev->prev<<endl;
    cout<<"temp next prev prev val "<<temp->next->prev->prev->val<<endl;
    cout<<"last prev prev next value "<<last->prev->prev->next->val<<endl;

  return 0;
}


