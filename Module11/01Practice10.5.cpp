#include<bits/stdc++.h>
using namespace std;
void printArray(int array[], int size)
{
    for(int i=0; i<size; i++)
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
    int sum =0;
    for(int i =0; i<size; i++)
    {
        cin>>array[i];
        sum += array[i];
    }
    cout<<endl<<sum<<endl;
    //printArray(array, size);
    return 0;
}
