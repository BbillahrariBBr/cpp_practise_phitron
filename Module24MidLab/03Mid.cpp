#include<bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        //number of day input;
        int day;
        cin>>day;
        int arrEarn[day], arrShop[day];
        int preEarn[day+1] = {0};
        int preShop[day+1] = {0};
        //input for earn
        for(int i = 0; i<day; i++)
        {
            cin >> arrEarn[i];
        }

        //input for shop
        for(int i = 0; i<day; i++)
        {
            cin >> arrShop[i];
        }



        //query
        int q;
        cin>>q;
        int qArr[q];

        //input for query
         for(int i = 0; i<q; i++)
        {
            cin >> qArr[i];
        }

        for(int i =1; i<day+1; i++)
        {
            preEarn[i] = arrEarn[i-1] + preEarn[i-1];
            preShop[i] = arrShop[i-1] + preShop[i-1];
        }

        for(int i = 0; i<q; i++)
        {
            if(preEarn[qArr[i]+1] - preShop[qArr[i]+1] >=0)
            {
                qArr[i] = 1;
            }
            else{
                qArr[i] = 0;
            }


        }
    //    printArray(preEarn,day);
    //    printArray(preShop,day);
          printArray(qArr,q);
    }



  return 0;
}

