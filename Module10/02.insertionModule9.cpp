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



    cout<<"enter position of the Insertion : ";
    int pos;
    cin>>pos;

    cout<<"Enter the value : ";
    int value;
    cin>> value;

    if(pos<0 || pos> size)
    {
        cout<<"Invalid Index.."<<endl;
    }
    else{
        //size-1 ->pos;
        for(int i=size-1; i>=pos; i--)
        {
            array[i+1] = array[i];
        }
        array[pos] = value;
    }


     // call printArray function for array print
    cout<<"Given array"<<endl;
    printArray(array, size+1);

    return 0;


}
