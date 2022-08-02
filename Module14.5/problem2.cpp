#include<bits/stdc++.h>
using namespace std;

void printArray(int *array, int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
            cout << *((array+i*n)+j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int array[n][n];

    for(int i = 0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
          cin>>array[i][j];
        }
    }

    cout<<"Major diagonal : ";
    for(int i = 0; i<n; i++)
    {
        cout<<array[i][i]<<" ";
    }
    cout <<endl;

    cout<<"Minor diagonal : ";
    for(int i = 0; i<n; i++)
    {
        cout<<array[i][n-i-1]<<" ";
    }
    cout <<endl;


   //printArray(*array,n);

  return 0;
}



