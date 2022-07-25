#include<bits/stdc++.h>

using namespace std;

void printArray(int array[], int size){
    for(int i =0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{
    // Ds Array Traversal

    int array[50];
    int size;
    cin>> size;

    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    // call printArray function for array print
    printArray(array, size);
    return 0;
}
