#include<bits/stdc++.h>
using namespace std;
// Linear Search
int main()
{
    int size;
    cin>>size;
    int arr[size];
    //input array
    for(int i =0; i<size; i++)
    {
        cin>>arr[i];
    }
    char c;
    cout<<"Do u want to search(Y/N) : ";
    cin>>c;
    while(toupper(c) == 'Y')
    {
       int find_value;
        cout<<"ENter search value: ";
        cin>>find_value;
        //searching value
        int flag = 0;
        for(int i = 0; i<size; i++)
        {
            if(find_value== arr[i])
            {
                flag = 1;
                cout<< i <<" th Index, "<<i+1 << " Position"<<endl;
            }
        }
        if(flag==0)
        {
            cout<<"Not FOund"<<endl;
        }

        cout<<"Do u want to continue searching(Y/N) : ";
    cin>>c;
    }


  return 0;
}

