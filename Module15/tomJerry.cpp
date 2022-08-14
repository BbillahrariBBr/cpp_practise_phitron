#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    cin>>t;
    int tom =0;
    int jer =0;
    int flag=1;
    for(int i = 1; i<=t; i++)
    {
        cin>>str;

        for(int j = str.size()-1; j>=0; j--)
        {

            if(flag==1)
            {
                if(str[j]=='1')
                {
                    //cout<<str[j];
                    tom++;
                    //cout<<count<<endl;
                }
               else
                {
                    flag = 2;
                }
            }
            else if(flag==2){
                if(str[j]=='1')
                {
                    //cout<<str[j];
                    jer++;
                    //cout<<count<<endl;
                }
               else
                {
                    flag = 1;
                }
            }
        }
        cout<<"tom-> "<<tom<<" jerry-> "<<jer<<endl;

    }

  return 0;
}

