#include<bits/stdc++.h>
using namespace std;
//1529A 	Eshag Loves Big Arrays

int main()
{
    int loop;
    cin>>loop;
    int size;
    while(loop--)
    {
        int min = INT_MAX;
        int count =0;
        cin>>size;
        int array[size];
        for(int i =0; i<size; i++)
        {
            cin>>array[i];
            if(array[i]<min)
                {min= array[i];
                //cout<<"min val: " <<min<<" " ;
                }
        }
        //cout<<endl;


        for(int i =0; i<size; i++)
        {
            if(array[i] == min)
            {
               count++;
               //cout<<"count "<<count<<" ";
            }
        }
        //cout<<endl;
        cout<<size-count<<endl;
    }


  return 0;
}

