#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;
void reverseSentence(string chk)
{

    for(int i = 0; i<chk.length(); i++)
    {
        string word = "";
        while(i<chk.length() && chk[i]!= " ")
        {
           word += chk[i];
           i++;
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

