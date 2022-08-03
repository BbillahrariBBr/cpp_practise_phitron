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
           if(i==j)
           {
               array[i][j] = 1;
           }
           else
            array[i][j] =0;
        }
    }
    printArray(*array,n);

  return 0;
}



