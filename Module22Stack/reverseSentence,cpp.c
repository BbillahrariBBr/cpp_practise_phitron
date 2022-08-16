#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;
void reverseSentence(string chk)
{
    string word = "";
    for(int i = 0; i<chk.length(); i++)
    {
        while(i<chk.length() && chk[i]!= " ")
        {
           word += chk[i]
        }
        cout<<word<<endl;
    }
}

int main()
{
    string s = "I am Bakibillah";
    reverseSentence(s);
  return 0;
}

