#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 4;
    int count=0;
    int nmbr;

    for(int i =0; i<n; i++)
    {
        cin>>nmbr;
        if(nmbr>=10)
        {
            count++;
        }
    }
    cout<<count<<endl;

  return 0;
}

