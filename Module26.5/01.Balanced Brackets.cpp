#include<bits/stdc++.h>
#include"MYSTACK.h"
// ref https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/
using namespace std;

bool isBalanced(string chk)
{
    Stack<char> st;
    for(int i = 0; i<chk.length(); i++)
    {
        if(st.empty())
        {
            st.push(chk[i]);
        }
        else if(st.topf()=='(' && chk[i] == ')'
                || st.topf() == '{' && chk[i] == '}'
                || st.topf() == '[' && chk[i] == ']')
                    {
                        st.pop();
                    }
        else{
            st.push(chk[i]);
        }
    }
    if(st.empty())
    {
        return true;
    }
    return false;
}
int main()
{
    string brackets;
    cin>>brackets;
    bool result;
    result = isBalanced(brackets);
    if(result == true)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
  return 0;
}

