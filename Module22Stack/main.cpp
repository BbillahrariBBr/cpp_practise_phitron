#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;
/*
* stack of flot, stack of char, double, string, array, structure
object of class
*/
int main()
{
    Stack st;
    st.push(1);
    st.push(4);
    st.push(3);
    while(!st.empty())
    {
        cout<<st.pop()<<endl;
    }

    cout<<st.size()<<endl;
    cout<<st.topf();

  return 0;
}

