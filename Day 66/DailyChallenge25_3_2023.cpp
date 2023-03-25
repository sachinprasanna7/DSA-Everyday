#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

class Solution {
    private:

        void dfs(int node, unordered_map <int, bool> &visited, unordered_map <int, list <int>> &adj, vector <int> &component ){

    component.push_back(node);
    visited[node] = true;

    for(auto i : adj[node]){
        if(!visited[i]){
            dfs(i, visited, adj, component);
        }
    }
}

public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        unordered_map <int, list <int>> adj;

        for(int i = 0 ; i < edges.size() ; i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector <vector <int>> ans;

        unordered_map <int, bool> visited;

        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                vector <int> component;
                dfs(i, visited, adj, component);
                ans.push_back(component);
            }
        }

        long long answer = 0;

        for(int i = 0 ; i < ans.size() ; i++){
            long long currentComponentSize = ans[i].size();
            answer += currentComponentSize * (n - currentComponentSize);
        }

        return answer/2;
            
    }
};

int main(){
  
  return 0;
}