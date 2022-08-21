#include<bits/stdc++.h>
#include"MYQUEUE.h"
using namespace std;

typedef pair<int, int> myType;
int main()
{
    Queue<myType> q;
    int n;
    cin>>n;
    for(int i =0; i<n; i++)
    {
        int c1,c2;
        cin>>c1>>c2;
        q.push(make_pair(c1,c2));
    }
//    while(!q.empty())
//    {
//        myType chk;
//        chk = q.pop();
//        cout<<chk.first<<" "<<chk.second;
//    }
    if(!q.empty())
    {
        cout<<q.frontF().first<<" "<<q.frontF().second<<endl;
    }
    if(!q.empty())
    {
        cout<<q.back().first<<" "<< q.back().second<<endl;
    }

  return 0;
}

