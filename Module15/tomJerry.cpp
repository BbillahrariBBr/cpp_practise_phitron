#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    cin>>t;
    int count =0;

    for(int i = 1; i<=t; i++)
    {
        cin>>str;
        int flag=1;
        for(int j = str.size(); j>=0; j--)
        {

            if(flag==1)
            {
                if(str[j]=='1')
                {
                    cout<<str[j];
                    count++;
                    cout<<count<<endl;
                }
               else
                {
                    flag = 0;
                }
            }
        }
        cout<<count<<endl;

    }

  return 0;
}

