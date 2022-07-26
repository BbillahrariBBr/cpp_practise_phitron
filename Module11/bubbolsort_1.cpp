#include<bits/stdc++.h>
using namespace std;

void printArray(int array[],int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a= b;
    b =a;
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
    cout<<"Before sort : ";
    printArray(array, size);
    // bubble sort implementation

    for(int i =1; i<size; i++)
    {
        for(int j =0; j<size-i; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
             printArray(array, size);
             cout<<endl;
        }
        cout<<"Iteration "<<i+1<<" done"<<endl;
    }

    cout<<"After sort : ";
    printArray(array, size);



  return 0;
}

