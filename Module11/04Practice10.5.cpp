#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int array[size];
    int indMin,indMax;
    for(int i =0; i<size; i++)
    {
        cin>>array[i];
    }
    int min = array[0], max = array[0];
    for(int i=1; i<size; i++)
    {
        if(array[i]<min)
        {
            indMin = i;
            min= array[i];
        }
        if(array[i]>max)
        {
            indMax = i;
            max= array[i];
        }
    }
    cout<<"Max : "<<max<<", Index : "<<indMax<<endl;
    cout<<"Min : "<<min<<", Index : "<<indMin<<endl;
    return 0;
}

