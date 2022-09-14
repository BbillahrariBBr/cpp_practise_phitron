 #include<bits/stdc++.h>
using namespace std;
typedef pair<int ,int> PAIR;

int main()
{
    int k;
    cin>>k;
    vector<vector<int>>allVal(k);
    //input
    for(int i = 0; i<k; i++)
    {
        int size;
        cin>>size;
        allVal[i] = vector<int>(size);
        for(int k = 0; k<size; k++)
        {
            cin>>allVal[i][k];

        }
    }

    vector<int> indexTracker(k,0);
    priority_queue<PAIR,vector<PAIR>, greater<PAIR>> pq;
    //initializ pq
    for(int i =0; i<k;i++)
    {
        pq.push(make_pair(allVal[i][0],i));
    }
    vector<int> ans;
    while(!pq.empty())
    {
        PAIR x = pq.top();
        pq.pop();
        ans.push_back(x.first);

        if(indexTracker[x.second]+1 < allVal[x.second].size())//incrmnt pos validiy chck
        {
          pq.push(make_pair(allVal[x.second][indexTracker[x.second]+1],x.second));
          //we are crating a pair(incr pos value, increment pos identity then push

        }
        indexTracker[x.second]+=1;


    }
    for(auto element:ans)
    {
        cout<<element<<" ";
    }
    cout<<endl<<endl;

  return 0;
}

/*
k
3
3 size of array

3
3
1 4 7
2
3 5
3
2 6 7

*/

