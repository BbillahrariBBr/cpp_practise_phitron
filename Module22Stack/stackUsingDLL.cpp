#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node* next;
    Node* prev;

    Node(int val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

class Stack{
    Node *head;
    Node *top;
    int Count = 0;


public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    //PUSH
    void push(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = top = newNode;
            Count++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        Count++;
    }
    //POP
    int pop()
    {
        Node* delNode;
        delNode = top;
        int chk = -1;
        //there is No element in the stack
        if(head==NULL)
        {
            cout<<"stack Underflow"<<endl;
            return chk;
        }
        if(top==head) //there is only 1 element
        {
            head = top = NULL
        }
        else//there is more than 1 element
            {
            top = delNode->prev;
            top->next = NULL;
        }
        chk= delNode->value
        delete delNode;
        Count--;
        return chk;

    }
    //Empty
    bool empty(){
        if(head==NULL) return true;
        else return false;
    }
    //Size
    int size()
    {

        return Count;
    }
    //Top
    int top()
    {
        if(top==NULL)
        {
          cout<<"stack Underflow | there is no element in Top"<<endl;
        }
        else return top->value;
    }
};


