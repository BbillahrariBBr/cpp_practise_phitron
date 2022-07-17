#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "abcdefghij";
    string::iterator it;
    for(it= st.begin(); it!= st.end(); it++)
    {
        cout<<*it<<endl;
    }
//  reverse way
     for(string::reverse_iterator rit= st.rbegin(); rit!= st.rend(); rit++)
    {
        cout<<*rit<<endl;
    }
    //anoother way
  for(auto ait= st.rbegin(); ait!= st.rend(); ait++)
    {
        cout<<*ait<<endl;
    }
  return 0;
}

