#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
       while(t--)
    {
        int n, c;
        cin>>n>>c;
        int array[n];
        for(int i = 0; i<n; i++)
        {
            cin>>array[i];
        }
        int sum=0;
        for(int i =0; i<n; i++)
        {
            sum+=(array[i]*2);
//        cout<<sum<<endl;
        }
        if(sum<=c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }

//    cout<<"total sum"<<sum;
    return 0;
}

