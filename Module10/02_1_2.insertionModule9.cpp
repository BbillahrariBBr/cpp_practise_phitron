#include<bits/stdc++.h>

using namespace std;

void printArray(int array[],int size)
{
    for(int i=0; i<size; i++)
    {
       cout<<array[i]<<" ";
    }

}

int main()
{
    int array[50];
    cout<<"Enter your Array Size: ";
    int size;
    cin>>size;
    cout<<"Enter array : ";
    //input array
    for(int i =0; i<size; i++)
    {
        cin>>array[i];
    }

    int pos;
    cout<<"Enter Position of the insertion 0 to "<<size-1 <<": ";
    cin>>pos;
    cout<<"Enter the value : ";
    int value;
    cin>>value;

    if(pos<0 || pos>size)
    {
        cout<<"Invalid Index.."<<endl;
    }
    else{
        array[size]=array[pos];
        array[pos] = value;
        size++;
    }

    //call printArray for array output
    cout<<"Given Array"<<endl;
    printArray(array,size);
}

