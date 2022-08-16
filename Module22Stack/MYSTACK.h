#include<bits/stdc++.h>
using namespace std;
template<typename N> class Node{
public:
    N value;
    Node* next;
    Node* prev;

    Node(N val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

template<typename S>class Stack{
    Node <S> *head;
    Node <S>  *top;
    int Count = 0;


public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    //PUSH
    void push(S val)
    {
        Node <S> *newNode = new Node<S>(val);
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
    S pop()
    {
        Node <S> *delNode;
        delNode = top;
        S chk;
        //there is No element in the stack
        if(head==NULL)
        {
            cout<<"stack Underflow"<<endl;
            return chk;
        }
        if(top==head) //there is only 1 element
        {
            head = top = NULL;
        }
        else//there is more than 1 element
            {
            top = delNode->prev;
            top->next = NULL;
        }
        chk= delNode->value;
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
    S topf()
    {
        S chk;
        if(top==NULL)
        {
          cout<<"stack Underflow | there is no element in Top"<<endl;
          //chk =-1;
        }
        else chk= top->value;

        return chk;
    }
};


