#include<bits/stdc++.h>
using namespace std;
//atcoder

int main()
{
    string s;
    cin>>s;
    int size = s.length();
    int positionA;
    int positionZ;
    //cout<<size;
    //for A position;
    for(int i =0; i<size; i++)
    {
        if(s[i]=='A')
        {
            positionA = i+1;
            break;
        }
    }

    //for z  position;
    for(int i =0; i<size; i++)
    {
        if(s[i]=='Z')
        {
            positionZ= i+1;
        }
    }

    cout<<positionZ-positionA+1<<endl;



  return 0;
}

