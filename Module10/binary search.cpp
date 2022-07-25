#include<bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int value, int lb, int ub)
{
    if(lb<=ub)
    {
        int mid = (lb+ub)/2;
        //value == array[mid]
        if(value == array[mid]) return mid;
        //value> array[mid]
        else if(value> array[mid]) binarySearch(array,value,mid+1,ub);
        //value< array[mid]
        else binarySearch(array, value,lb,mid-1);

    }
    else
    {
        return -1;
    }
}

int main()
{
    int size;
    cout<<"Enter array size : ";
    cin>>size;

    int array[size];
    cout<<"Enter Your Array : ";
    for(int i =0; i<size; i++)
    {
        cin>>array[i];
    }

    int value;
    cout<<"Enter a value for search : ";
    cin>>value;
    int lb=0;
    int ub = size-1;

    int index_number = binarySearch(array,value,lb,ub);

    if(index_number == -1)
    {
        cout<<"Value Not found";
    }
    else{
        cout<<"Value "<<value<<" -> index : "<<index_number <<" position : "<<index_number+1<<endl;
    }

    return 0;
}
