#include<bits/stdc++.h>
using namespace std;

int main()
{
  string st,stcont(10,'z'); // dynamic array
  cout<<stcont<<endl;
  cout<<st.max_size()<<endl;
  cout<< st.capacity()<<endl;
  cin>> st;
  cout<< st.capacity()<<endl;
  cout<<st<<endl;
  return 0;
}

