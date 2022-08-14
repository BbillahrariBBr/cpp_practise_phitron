#include<bits/stdc++.h>
using namespace std;
//create a class Node

class Node{
public:
    int value;
    Node * next;

    Node(int val){
        this->value= val;
        this->next = NULL;
    }
};

int main()
{
    Node head(5);
    cout<<head.next<<endl;

  return 0;
}

