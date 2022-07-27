#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int array[size];
    int sum =0;
    for(int i =0; i<size; i++)
    {
        cin>>array[i];
        if(i%2 == 0) sum += array[i];


    }
    cout<<endl<<sum<<endl;

  return 0;
}

