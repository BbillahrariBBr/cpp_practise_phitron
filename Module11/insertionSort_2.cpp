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
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    cout<<"After Sorting: "<<endl;
    printArray(array, size);
    cout<<endl;
    //insertion sort
    for(int i = 1; i<size; i++)
    {
        int key = array[i];
        cout<<"i : "<<i<<" key : "<<key<<endl;
        int j = i-1;
        while(array[j]>key && j>=0)
        {
            array[j+1] = array[j];
            printArray(array, size);
            j--;
        }
        array[j+1] = key;
        printArray(array, size);
        cout<<endl;
    }

    cout<<"before Sorting: "<<endl;
    printArray(array, size);

  return 0;
}

