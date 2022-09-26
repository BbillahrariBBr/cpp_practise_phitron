#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *adj;
public:
    Graph(int V)
    {
        this->V=V;
        adj = new list<int>[V];
    }
    void addEdge(int n, int e)
    {
        adj[n].push_back(e);
        //adj[e].push_back(n);
    }

//    void printNeighbour(int chk)
//    {
//        //cout<<chk<<":";
//        int count =0;
//        for(auto i = adj[chk].begin(); i!=adj[chk].end(); i++)
//        {
//            //cout<<"-> "<<(*i);
//            count++;
//        }
//        cout<<endl<<count<<endl;
//    }

     void BFS(int source)
    {
        vector<bool> visited(V,false);
        queue<int> Q;
         int count =0;
        visited[source] = true;
//        cout<<source<<" ";
        Q.push(source);
        while(!Q.empty())
        {
            int u = Q.front();
            //cout<<u<<" ";

            Q.pop();
            for(auto element: adj[u])
            {
                int v = element;
                if(visited[v]!=true){
                    visited[v] = true;

                    Q.push(v);
                    count++;
                }

            }
        }
        cout<<count<<endl;

    }

    void DFS(int source)
    {
        cout<<source<<" ";
        static vector<bool> visited(V,false);
        visited[source] = true;
        for(auto element: adj[source])
        {
            int v = element;
            if(visited[v]!= true)
            {
                DFS(v);
            }

        }


    }
};

int main()
{
    int N,E;
    cin>>N>>E;
    Graph g(N);
    for(int i =0; i<E; i++)
    {
        //n = node e = edge w = weight
        int A,B;
        cin>>A>>B;
        g.addEdge(A,B);
    }
    int k;
    cin>>k;
    //g.printNeighbour(k);
    //cout<<endl;
    g.BFS(k);
    //cout<<"DFS"<<endl;
    //g.DFS(k);

  return 0;
}


