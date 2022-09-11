#include<bits/stdc++.h>
using namespace std;

int main()
{
  int space, rows;
  cin>>rows;
  for(int i = 1; i<=rows; i=i+2)
  {
      for(int j=1; j<=i;j++)
      {
          cout<<"*";
      }
      cout<<endl;

  }
  return 0;
}

