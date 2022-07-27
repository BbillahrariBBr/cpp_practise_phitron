#include<bits/stdc++.h>
using namespace std;


void printArray(int array[], int size)
{
    for(int i = 0; i<size; i++)
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
    for(int i = 0; i<size; i++)
    {
        cin>>array[i];
    }

    cout<<"before Sorting : ";
    printArray(array,size);


    // bubble sort

    cout<<"after Sorting : ";
    printArray(array,size);

  return 0;
}

