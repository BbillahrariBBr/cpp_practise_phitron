#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;
/*
* stack of flot, stack of char, double, string, array, structure
object of class
*/
int main()
{
    Stack <pair<int,char>> st;
    st.push(make_pair(1,'a'));
    st.push(make_pair(5,'d'));
    st.push(make_pair(7,'z'));

//    while(!st.empty())
//    {
//        cout<<st.pop()<<endl;
//    }
    pair <int,char> chk;
    chk = st.pop();
    cout<<chk.first<<endl;
    cout<<chk.second<<endl;
    cout<<st.size()<<endl;

    pair <int,char> chk1;
    chk1 = st.topf();
    cout<<chk1.first<<endl;
    cout<<chk1.second<<endl;

  return 0;
}

