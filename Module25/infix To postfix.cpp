#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

//precision cal
int precisionCalc(char c)
{
    if(c == '^') return 3;
    else if(c == '/' || c=='*') return 2;
    else if(c == '+' || c=='-') return 1;
    else return -1;

}
string infixToPostfix(string chk)
{
    Stack<char> st;
    string result;
    for(int i =0; i<chk.length(); i++)
    {
        if(chk[i]>= '0' && chk[i]<='9')
        {
            result+=chk[i];
        }
        else if(chk[i]== '(')
        {
            st.push(chk[i]);
        }
        else if(chk[i] == ')')
        {
            while(!st.empty() && st.topf()!= '(')
            {
                result += st.pop();
            }
            if(!st.empty()) st.pop(); // opening bracket pop
        }
        else{
            while(!st.empty() && precisionCalc(st.topf())>= precisionCalc(chk[i]))
            {
                result+= st.pop();
            }
            st.push(chk[i]);
        }
    }
    while(!st.empty())
    {
        result +=st.pop();
    }
    return result;
}

//postfix Evaluation
int postfixEvaluation(string chk)
{
    Stack<int> St;
    for(int i = 0; i<chk.length(); i++)
    {
        if(chk[i]>= '0' && chk[i]<='9')
        {
            St.push(chk[i]-'0');
        }
        else
        {
            int a = St.pop();
            int b = St.pop();
            switch(chk[i])
            {
            case '+':
                St.push(a+b);
                break;
            case '-':
                St.push(b-a);
                break;
            case '*':
                St.push(a*b);
                break;
            case '/':
                St.push(b/a);
                break;
            case '^':
                St.push(pow(b,a));
                break;
            default:
                break;
            }
        }
    }
    return St.topf();
}
int main()
{
    //string infixvalue = "(7+(4*5)-(2+0))";
    string infixvalue = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";
    string postfixValue = infixToPostfix(infixvalue);
    cout<<postfixValue<<endl;

    cout<<postfixEvaluation(postfixValue)<<endl;
    //cout<<prefixEvaluation("-+7*45+20")<<endl;

  return 0;
}

