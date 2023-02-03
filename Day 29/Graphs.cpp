#include <iostream>
#include <unordered_map>
#include <list>

//template <typename T>

using namespace std;


class Graph{

    public:

        unordered_map <int, list <int> > adj;

        void addEdge(int u, int v, bool direction){
            //direction = 0 -> undirected
            //direction = 1 -> directed

            adj[u].push_back(v);

            if(!direction) adj[v].push_back(u);
        }

        void printAdjList(){
            for(auto i:adj){
                cout<<i.first <<"-> ";
                for(auto j : i.second){
                    cout<< j <<", ";
                }
                cout<<endl;
            }
        }
};



int main(){
  
  Graph g;

  int nodes,edges;
  cin>>nodes;
  cin>>edges;

  for(int i = 0 ; i < nodes ; i++){
    int u,v;
    cin>>u>>v;

    g.addEdge(u,v,0);
  }

  g.printAdjList();


  return 0;
}