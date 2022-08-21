#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

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
//42*3+
//745*+20+-
int main()
{
    cout<<postfixEvaluation("23+4^")<<endl;

  return 0;
}

