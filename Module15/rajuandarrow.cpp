#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<n;i++)
    {
        for(int j=n-2; j>=i-1; j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i; k++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 1; i<=2; i++)
    {
        for(int j =1; j<=n*2; j++)
        {
           cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i<n;i++)
    {
        for(int k=1;k<=i; k++ )
        {
            cout<<" ";
        }
        for(int j=n-1; j>=i; j--)
        {
            cout<<"*";
        }

        cout<<endl;
    }

  return 0;
}

