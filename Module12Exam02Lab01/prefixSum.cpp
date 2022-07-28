#include<bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for(int i =1; i<=size; i++)
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
    int preArray[size] = {0};
    array[0] = preArray[0] =0;
    for(int i =1; i<=size; i++)
    {
        cin>>array[i];
        preArray[i] =array[i]+preArray[i-1];
    }
    printArray(preArray,size);

  return 0;
}

