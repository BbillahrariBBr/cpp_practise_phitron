#include<bits/stdc++.h>
using namespace std;
void printArray(int array[], int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<array[i]<<endl;
    }
//    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //liner serach
    int cas;
    cin>>cas;
    for(int c =0; c<cas; c++)
    {

        int size,q;
        cin>>size>>q;
        int array[size];
        for(int i =0; i<size; i++)
        {
            cin>>array[i];
        }

        int arr[q] ={0};
        for(int i =0; i<q; i++)
        {
            int start_val,end_val;
            cin>>start_val>>end_val;
            int min = array[start_val-1];
            for(int j=start_val;j<end_val;j++ )
            {
                if(min>array[j])
                {
                    min = array[j];
                }
            }
            arr[i]=min;
            //cout<<min<<endl;
        }
        cout<<"Case "<<c+1<<":"<<endl;

         printArray(arr,q);

    }






  return 0;
}


