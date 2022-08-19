#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int cnt = 0;
    //input for n size Array
    cin>>n;
    int arrA[n],arrC[n];
    for(int i =0; i<n; i++)
    {
        cin>>arrA[i];
    }
     //input for m size Array
    cin>>m;
    int arrB[m];
    for(int i =0; i<m; i++)
    {
        cin>>arrB[i];
    }

   //A-B
    for(int i = 0; i<n; i++){
        //cout<<"arrA->"<<arrA[i]<<" ";
        int flag = 0;
        for(int j = 0; j<m; j++)
        {

            //cout<<"arrB->"<<arrB[j]<<" ";
            if(arrA[i]==arrB[j])
            {
                flag =1;
                break;
            }
             //cout<<endl;
        }
        if(flag == 0)
        {
            arrC[cnt] = arrA[i] ;
            //cout<<"arrC->"<<arrC[cnt]<<" ";
            cnt++;
            //cout<<"count->"<<cnt<<" ";
        }
        //cout<<endl;
    }

    if(cnt == 0)
    {
        cout<<"{} - set is empty";
    }
    else
    {
        for(int i =0; i<cnt; i++)
        {
            cout<<arrC[i]<<endl;
        }
    }

  return 0;
}

