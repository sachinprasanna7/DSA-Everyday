#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

class Solution {

    private:

        void dfs(unordered_map <int, list <int>> &adj, unordered_map <int, bool> &visited, int node, vector <int> &component){

            component.push_back(node);
            visited[node] = true;

            for(auto neighbour : adj[node]){
                if(!visited[neighbour]){
                    dfs(adj, visited, neighbour, component);
                }
            }
        }

public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        unordered_map <int, list <int>> adj;

        for(int i = 0 ; i < connections.size() ; i++){
            int u = connections[i][0];
            int v = connections[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector <vector <int>> ans;

        unordered_map <int, bool> visited;

        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                vector <int> component;
                dfs(adj, visited, i, component);
                ans.push_back(component);
            }
        }

        int minimumEdges = 0;

        for(int i = 0 ; i < ans.size() ; i++){
            int componentSize = ans[i].size();
            minimumEdges += (componentSize - 1);
        }
        
        minimumEdges += ans.size() - 1;

        int totalEdgesinGraph = connections.size();

        if(totalEdgesinGraph < minimumEdges) return -1;

        return ans.size() - 1;

    }
};

int main(){
  
  return 0;
}