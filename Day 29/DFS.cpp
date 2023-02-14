#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <list>

using namespace std;

void dfs(int node, unordered_map <int, bool> &visited, unordered_map <int, list <int>> &adj, vector <int> &component ){

    component.push_back(node);
    visited[node] = true;

    //For every connected node, make a recursive call

    for(auto i : adj[node]){
        if(!visited[i]){
            dfs(i, visited, adj, component);
        }
    }
}


vector <vector <int>> depthFirstSearch (int V, int E, vector <vector <int>> &edges){

    //prepare Adjacent list

    unordered_map <int, list <int>> adj;

    for(int i = 0 ; i < edges.size() ; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector <vector <int>> ans;

    unordered_map <int, bool> visited;

    //For all nodes, call dfs if not visited. This is for disconnected graphs

    for(int i = 0 ; i < V ; i++){
        if(!visited[i]){
            //Finding for each component
            vector <int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }

}

int main(){
  
  return 0;
}