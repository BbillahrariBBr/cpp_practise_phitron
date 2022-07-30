#include<bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for(int i =1; i<size; i++)
    {
        cout<<array[i]<<endl;
    }
    cout<<endl;
}
//void prefix(int array[], int size)
//{
//    for(int i =0; i<size; i++)
//    {
//        preArr[i] =
//    }
//}

int main()
{
    int size,q;
    //cout<<"size and q: "<<endl;
    cin>>size>>q;
    int array[size+1];
    array[0] =0;
    //cout<<"array"<<endl;
    for(int i=1; i<=size; i++)
    {
        cin>>array[i];
    }
    int preArr[size+1] ={0};
    for(int i =1; i<=size; i++)
    {
        preArr[i] =array[i]+preArr[i-1];
    }
    while(q--)
    {
        int input;
        //cout<<"input"<<endl;
        cin>>input;
        if(input==1)
        {
            int pos;
            //cout<<"pos"<<endl;
            cin>>pos;
            cout<<array[pos+1];
            array[pos+1]= 0;
            for(int i =pos+1; i<=size; i++)
                {
                    preArr[pos+1] =array[i]+preArr[i-1];
                }
        }
        if(input==2)
        {
            int pos,v;
            //cout<<"pos and v"<<endl;
            cin>>pos>>v;
            array[pos+1]+=v;
            //cout<<endl<<array[pos+1];
            for(int i =pos+1; i<=size; i++)
                {
                    preArr[i] =array[i]+preArr[i-1];
                }
                //printArray(preArr,size+1);
        }

        if(input==3)
        {
            int pos,pos1;
            //cout<<"pos and pos1"<<endl;
            cin>>pos>>pos1;
            if(pos==0)
            {
                cout<<array[pos1+1]<<endl;
            }
            else{
                cout<<preArr[pos1+1]-preArr[pos+1]<<endl;
            }
            //array[pos+1]+=v;
            //cout<<endl<<array[pos+1];

                //printArray(preArr,size+1);
        }


    }
    //printArray(array,size+1);
    //printArray(preArr,size+1);


  return 0;
}

