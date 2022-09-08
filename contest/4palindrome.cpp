#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    char palindrome[size+1],check[size+1];
    for(int i=0; i<size;i++)
    {
        cin>>palindrome[i];
        check[i]=palindrome[i];
    }

    for(int i=0,j=size-1;i<size,j>=0;i++,j-- )
    {
        if(palindrome[i]-'a'!= check[j]-'a')
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;


  return 0;
}

