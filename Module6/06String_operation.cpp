#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "aaaabbbaaazz";
    //find
    cout<<st.find('z')<<endl;
    cout<<st.find_first_of('z')<<endl;
    //revers find
    cout<<st.rfind('a')<<endl;
    cout<<st.find_last_of('a')<<endl;
    //not find
    cout<<st.find_first_not_of('a')<<endl;
    //not find
    cout<<st.find_last_not_of('z')<<endl;
    //substring
    cout<<st.substr(3,5)<<endl;
    //subsequence
    cout<<st.substr(3,5)<<endl;
//    //count
//    cout<<st.count('a')<<endl;


  return 0;
}

