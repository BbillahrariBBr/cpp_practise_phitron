#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,x,y,acc;
  cin >>n>>k>>x>>y;
  if(n<k)
  {
      acc = (n*x);
  }
  else
    acc = (k*x)+((n-k)*y);

  cout<<acc;
  return 0;
}

