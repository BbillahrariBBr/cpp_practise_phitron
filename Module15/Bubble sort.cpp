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
    for(int i = 1; i<size; i++)
    {

        int flag =0;
        cout<<"Iteration "<<i<<" : "<<endl;
        for(int j =0; j<size-i; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                flag =1;
            }
            printArray(array,size);
        }

        if(flag==0)
            {
             break;
            }
        cout<<endl;
    }

    cout<<"after Sorting : ";
    printArray(array,size);
    return 0;
}


