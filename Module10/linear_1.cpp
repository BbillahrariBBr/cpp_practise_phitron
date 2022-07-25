#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cout<<"Enter array Size : ";
    cin>>size;

    int array[size];
    cout<<"Enter array : ";
    for(int i =0; i <size; i++)
    {
        cin>>array[i];
    }
    char c;
    cout<<"Do You want to searching a value(Y/N) : ";
    cin>>c;
    while(toupper(c) == 'Y')
    {
        //search element or value;
        int value;
        cout<<"Enter value which you want search : ";
        cin>>value;
        int flag =0;

        for(int i =0; i<size; i++)
        {
            if(array[i]==value)
            {
                flag =1;
                cout<<"Your value "<<value <<"-> index: "<<i<<", position: "<<i+1<<endl;

            }
        }
        if(flag==0)
        {
            cout<<"Value Not found"<<endl;
        }

        cout<<"Do You want to searching a value(Y/N) : ";
        cin>>c;

    }


    return 0;
}
