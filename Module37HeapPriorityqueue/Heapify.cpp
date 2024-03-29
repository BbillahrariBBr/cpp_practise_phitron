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
    int largest = current;
    int leftChild = (2*current)+1;
    int rightChild = (2*current)+2;

    if(leftChild<size && array[leftChild]>array[largest])
    {
        largest = leftChild;
    }
    if(rightChild<size &&array[rightChild]>array[largest])
    {
        largest = rightChild;
    }
    if(largest !=current)
    {
        swap(array[current],array[largest]);
        heapify(array,size,largest);
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
    for(int i = size-1; i>=0; i--)
    {
        swap(array[0],array[i]);
        //print the array
        heapify(array,i,0);
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


*/

