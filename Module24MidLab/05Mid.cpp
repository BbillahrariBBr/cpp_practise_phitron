
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;
    int mid = n/2;
    int array[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>array[i][j];
        }
    }
//    cout<<mid;
    int sum = 0;


    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {

//start
            if((i==0 && j<=mid) || (i==n-1 && j>=mid) )
            {
                sum = sum+ array[i][j];
            }

            if((i==0 && j==n-1) || (i==n-1 && j==0))
            {
                sum = sum+ array[i][j];
            }
            if((i>0 && i<mid))
            {
                if((j==mid || j==n-1))
                {
                   sum = sum+ array[i][j];
                }

            }

            if(i>mid && i<n-1)
            {
                if(j==0 || j==mid )
                {
                   sum = sum+ array[i][j];
                }

            }

//mid
            if(i==mid)
            {
                sum = sum+ array[i][j];
            }


        }
//        cout<<"row: "<<i<<" "<<sum<<endl;
    }
    cout<<endl<<sum;

  return 0;
}
