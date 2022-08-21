#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

int prefixEvaluation(string chk)
{
    Stack<int> st;
    for(int i= chk.length()-1; i>=0; i--)
    {
        //chk[0 to 9]--> operand
        if(chk[i]>='0' && chk[i]<='9')
        {
            st.push(chk[i]-'0'); //(int)
        }
        else{
            int a = st.pop();
            int b = st.pop();
            switch(chk[i])
            {
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '^':
                st.push(pow(a,b));
                break;
            default:
                break;
            }
        }
        //chk[i] operator

    }
    return st.topf();
}
//+*423
//-+7*45+20
//+9*3/8 4
int main()
{
    cout<<prefixEvaluation("+9*3/84")<<endl;
  return 0;
}

