#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;
    int array[row][col];
    int arr[row*col];
    int count =0;

    for(int i=0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cin>>array[i][j];
            arr[count]= array[i][j];
            count++;
        }
    }
    // compare
    for(int i = 0; i<count; i++)
    {
        for(int j=i+1;j<count; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-1;
            }
        }
    }

//      for(int i =0; i<count; i++)
//  {
//      cout<<arr[i]<<" ";
//  }
//  cout<<endl;

    int cnt =0;
    for(int i=0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
//            cout<<"count "<<cnt<<endl;
//            cout<<"2d->"<<array[i][j]<<" ";
//            cout<<"arr->"<<arr[cnt]<<endl;


            if(array[i][j] == arr[cnt])
            {
                array[i][j] = arr[cnt];
            }
            else{
                array[i][j] = -1;
            }
            //arr[count]= array[i][j];
//            cout<<array[i][j]<<" ";
            cnt++;

        }
//        cout<<endl;
    }

cout<<endl;


    //display
    for(int i=0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }


  return 0;
}
