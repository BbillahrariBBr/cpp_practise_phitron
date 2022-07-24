#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name[10];
    int n;
    cin>>n;
    for(int i =0; i<=n; i++)
    {
        getline(cin,name[i]);
    }

    for(int i =0; i<n; i++)
    {
        cout<< name[i]<<endl;
    }


  return 0;
}

