#include<bits/stdc++.h>
using namespace std;
//void printArray(int array[], int size)
//{
//    for(int i =0; i<size; i++)
//    {
//        cout<<array[i]<<endl;
//    }
//    cout<<endl;
//}
int main()
{

    int t;
    cin>>t;
    int arrayt[t];
    for(int j =0; j<t; j++)
    {
        int size;
        cin>>size;
        int array[size];
        int itr[size] ={0};
        int count =0;
        for(int i = 0; i<size; i++)
        {
            cin>>array[i];
        }
        for(int i =0; i<size; i++)
        {
            for(int j=i; j<size; j++)
            {
                if(array[i]== array[j])
                {
                    itr[i]++;
                }
            }
        }
        int max = itr[0];
        for(int i=1; i<size; i++)
        {
            if(max<itr[i])
                max =itr[i];
        }

        //printArray(itr,size);
        cout<<size-max<<endl;


    }
//    printArray(arrayt,t);


  return 0;
}



