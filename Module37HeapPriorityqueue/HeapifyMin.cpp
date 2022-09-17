#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int array[], int size, int current)
{
    int min = current;
    int leftChild = (2*current)+1;
    int rightChild = (2*current)+2;

    if(leftChild<size && array[leftChild]<array[min])
    {
        min = leftChild;
    }
    if(rightChild<size &&array[rightChild]<array[min])
    {
        min = rightChild;
    }
    if(min !=current)
    {
        swap(array[current],array[min]);
        heapify(array,size,min);
    }

}
void printArray(int array[], int size)
{
    cout<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void heapSort(int array[], int size)

{
    int iter=1;
    for(int i = size-1; i>0; i--)
    {
        cout<<"iteration: "<<iter<<endl<<endl;
        cout<<"Before Swap the array is: "<<endl;
        printArray(array,size);
        swap(array[0],array[i]);
        cout<<endl<<"After Swap and Before heapify the array is: "<<endl;
        printArray(array,size);
        //print the array
        heapify(array,i,0);
        cout<<endl<<"After heapify the array is: "<<endl;
        printArray(array,size);
        iter++;
    }
}
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i = 0; i<n; i++)
    {
        cin>>array[i];
    }
    cout<<"before Heapify: "<<endl;
    printArray(array,n);
    //heapify

    int nonLeafStart = (n/2)-1;
    for(int i = nonLeafStart; i>=0; i--)
    {
        heapify(array,n,i);
    }
    cout<<"after Heapify: "<<endl;
    printArray(array,n);

    heapSort(array,n);
    cout<<"after heapSort: "<<endl;
    printArray(array,n);
    return 0;
}
/*
9
2 10 1 5 4 8 3 8 7
8
10 40 20 8 99 1 15 17

6
20 50 40 5 30 15


*/


