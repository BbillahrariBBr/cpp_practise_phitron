#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, i,j;
    cin >>row>>col;
    int a[row][col];
    for(i =0; i<row; i++)
    {
        for(j =0; j<col; j++)
        {
            cin >> a[i][j];
        }
    }
    int req_col;
    cin>>req_col;
    for(i =0; i<row; i++)
    {
        cout << a[i][req_col] << " ";
    }

  return 0;
}


