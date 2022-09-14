#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> H;
int main()
{
    vector<int> V(3,-1);
    for(int i = 0;i<V.size(); i++)
    {
         cout<< V[i]<<endl;
    }
    cout<<endl<<endl;
    V.push_back(3);

    //vector print using iterator
    vector<int> ::iterator it;
    for(it=V.begin();it!=V.end(); it++) //it++ is pointer arethmatic
    {
         cout<< *it<<endl;
    }
    cout<<endl<<endl;
    //auto register in range based traversal
    for(auto element: V)
    {
        cout<<element << " ";
    }
    cout<<endl<<endl;
    //auto register in place of iterator
    for(auto it=V.begin();it!=V.end(); it++) //it++ is pointer arethmatic
    {
         cout<< *it<<endl;
    }
    cout<<endl<<endl;

    //priority queue
    priority_queue<int, vector<int>,greater<int>> pQ;
    pQ.push(1);
    pQ.push(6);
    pQ.push(2);

    while(!pQ.empty())
    {
        cout<<pQ.top()<<" ";
        pQ.pop();
    }
    cout<<endl<<endl;


     //priority queue pair
    priority_queue<H, vector<H>,greater<H>> pairPq;
    pairPq.push(make_pair(1,2));
    pairPq.push(make_pair(6,2));
    pairPq.push(make_pair(4,1));

    while(!pairPq.empty())
    {
        cout<<pairPq.top().first<<"|"<<pairPq.top().second<<endl;;
        pairPq.pop();
    }
    cout<<endl<<endl;

  return 0;
}

