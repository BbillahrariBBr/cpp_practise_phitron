#include<bits/stdc++.h>
using namespace std;
//bidirectional weighted graph
typedef pair<int, int> edgeWeightPair;
class Graph{
    int V;
    list <edgeWeightPair> *adj;
public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<edgeWeightPair>[V];
    }
    void addEdge(int n, int e, int w)
    {
        adj[n].push_back(make_pair(e,w));
        adj[e].push_back(make_pair(n,w));
    }
    void printNeighbour(int chk)
    {
        cout<<chk<<":";
        for(auto i = adj[chk].begin(); i!=adj[chk].end(); i++)
        {
            cout<<"( "<<(*i).first<<", "<<(*i).second <<" )"<<"->";
        }
    }


};
int main()
{
    //input Node and Edge number
    int V,E;
    cin>>V>>E;
    Graph g(V);
    for(int i =0; i<E; i++)
    {
        //n = node e = edge w = weight
        int n,e,w;
        cin>>n>>e>>w;
        g.addEdge(n,e,w);
    }
    for(int i = 0; i<V; i++)
    {
        g.printNeighbour(i);
        cout<<endl;
    }

  return 0;
}

/*
7 10
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
2 5 8
3 6 1
5 6 2
5 4 6
6 4 4


*/

