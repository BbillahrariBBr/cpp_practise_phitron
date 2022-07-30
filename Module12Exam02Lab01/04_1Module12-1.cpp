#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
        cin>>size;
        int array[size];
        int count =0;
        for(int i = 0; i<size; i++)
        {
            cin>>array[i];
        }
        for(int i =1; i<size; i++)
        {
            if(array[0]==array[i] ) continue;
            else{
                count++;
            }
        }
        cout<<count<<endl;


  return 0;
}


