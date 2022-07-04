#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b;
  char c;
  cin >>a>>c>>b;
  int res;
  if(c== '+')
    res = a+b;
  if(c=='-')
    res = a-b;
  cout<< res;
  return 0;
}

