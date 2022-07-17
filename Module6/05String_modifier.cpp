#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "abcde";
    st.assign("xyz"); // = and assign is same;
    string st2 = "jklm";
    st.append(st2);
    st.push_back('b');
    st.pop_back();
    //insert
    st.insert(1,"abc");
    cout<<st<<endl;
    //delete
    st.erase(1,2);
    cout<<st<<endl;
    swap(st, st2);
    cout<< st << " " <<st2<<endl;

  return 0;
}

