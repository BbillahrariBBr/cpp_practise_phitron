#include<bits/stdc++.h>
using namespace std;
//create a class Node

class Node{
public:
    int value;
    Node *next;

    Node(int val){
        this->value= val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(7);
    cout<<head->value<<endl;

  return 0;
}

