#include<bits/stdc++.h>
using namespace std;

void printArray(int *array, int row, int col)
{
    for(int i = 0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
            cout << *((array+i*col)+j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row,col;
    cin>>row>>col;
    int array[row][col];

    for(int i = 0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
           if(i==j)
           {
               array[i][j] = 1;
           }
           else
            array[i][j] =0;
        }
    }
    printArray(*array,row,col);

  return 0;
}


