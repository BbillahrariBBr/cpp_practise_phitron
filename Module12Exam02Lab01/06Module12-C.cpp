#include<bits/stdc++.h>
using namespace std;
//wrong 3 2 3 need fixed
// at coder abc046_a ->paint cans
int main()
{
    int array[3];
    int count =0;
    for(int i = 0; i<3; i++)
    {
        cin>>array[i];
    }
    if(array[0] == array[2])
    {
        for(int i =0; i<3-2; i++)
        {
           if(array[i] != array[i+1])
            count++;
        }
    }
    else
    {
        for(int i =0; i<3-1; i++)
        {
           if(array[i] != array[i+1])
            count++;
        }

    }
    cout<<count+1<<endl;


  return 0;
}

