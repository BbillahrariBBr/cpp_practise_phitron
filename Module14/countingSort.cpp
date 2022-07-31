#include<bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cin>>size;
    int array[size];
    for(int i =0; i<size; i++)
    {
        cin>>array[i];
    }

    //step 1 max nmbr
    int max = INT_MIN;
    for(int i =0; i<size; i++)
    {
        if(array[i]>max)
            max= array[i];
    }
    // step 2 count array size max+1
    int count[max+1];
    for(int i = 0; i<=max; i++)
    {
        count[i]=0;
    }
    //step 3 frequency calculation
    for(int i =0; i<size; i++)
    {
        count[array[i]]++;
    }

    //step 4 comulative sum;
    for(int i =0; i<=max; i++)
    {
        count[i]+= count[i-1];
    }

    // step 5 sort using back track
    int final[size];

    for(int i=size-1; i>=0; i--)
    {
        count[array[i]]--;
        int k = count[array[i]];
        final[k]= array[i];
    }

    printArray(final,size);
//
//    cout<<max;
  return 0;
}

