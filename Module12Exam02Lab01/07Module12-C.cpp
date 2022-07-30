#include<bits/stdc++.h>
using namespace std;
//void printArray(int array[], int size)
//{
//    for(int i =0; i<size; i++)
//    {
//        cout<<array[i]<<" ";
//    }
//    cout<<endl;
//}
int main()
{
    int N;
    cin>>N;
    int tN = N;
    int temp;
    int array[3];
    for(int i =0; i<3; i++)
    {
        temp = tN%10;
        array[i] = temp;
        tN = tN/10;

    }
    if(array[0] == array[2])
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    //printArray(array,3);

  return 0;
}

