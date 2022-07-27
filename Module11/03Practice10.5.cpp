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

    for(int i =0; i<size; i++)
    {
        cin>>array[i];
    }
    int i =0, j = size-1;
    while(i<j)
    {
        int temp;
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
    printArray(array, size);
    return 0;
}
