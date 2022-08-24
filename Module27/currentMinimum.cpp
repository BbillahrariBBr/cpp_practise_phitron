#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    Stack <int> st;
    Stack <int> minStack;
    int min = INT_MAX;


    for(int i = 0; i<n; i++)
    {
        if(arr[i] <= min)
        {
            minStack.push(arr[i]);
            min = arr[i];
        }
        st.push(arr[i]);
    }

    while(!st.empty())
    {
        //if top of minstack and st is equa;
        if(minStack.topf()!= st.topf())
        {
            st.pop();
            cout<<minStack.topf()<<" ";
        }
        else{
            cout<<minStack.topf()<<" ";
            minStack.pop();
            st.pop();
        }
    }

  return 0;
}

