#include<bits/stdc++.h>
using namespace std;
int maxNumber(int arr[], int size)
{
    int mx = INT_MIN;
    for(int i =0; i<size; i++)
    {
        if(arr[i]>mx)
        {
            mx = arr[i];
        }
    }
    return mx;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    // array input
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int freqSize = maxNumber(arr,n);
    int freqArray[freqSize+1] = {0};

    for(int i = 0; i<n; i++)
    {
        freqArray[arr[i]]++;
    }
    for(int i=1; i<freqSize+1; i++)
    {
        if(freqArray[i]!=0)
        {
            cout<<i<<"=>"<<freqArray[i]<<endl;
        }

    }
    //cout<<freqSize;

  return 0;
}

