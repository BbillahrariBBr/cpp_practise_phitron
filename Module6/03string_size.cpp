#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "abcdefghij";
    cout<< st << " " <<st.size()<<endl;
    st.resize(5);
    cout<< st << " " <<st.size()<<endl;
    cout<<st.empty()<<endl;
    st.clear();
    cout<<st.empty()<<endl;
    cout<< st.length()<<endl;
    cout<< st.size()<<endl;

  return 0;
}

