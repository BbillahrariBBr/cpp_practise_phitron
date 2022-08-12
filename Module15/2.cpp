//Bablu and Phone
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int testCase;
  char persent;
  int n;
  int time=0;
  cin>>testCase;
  for(int i=1; i<=testCase; i++)
  {
      cin>>n>>persent;

        if(n<60)
      {
         time =(60-n)*1 + 20*2 + 20*3;
         cout<<time<<" minutes"<<endl;
      }
      if(n>=60 && n<80)
      {
         time = (80-n)*2 + 20*3;
         cout<<time<<" minutes"<<endl;
      }
      if(n>=80 && n<100)
      {
         time = (100-n)*3;
         cout<<time<<" minutes"<<endl;
      }
      if(n==100)
      {
          cout<<0<<" minutes"<<endl;
      }

  }
  return 0;
}
