#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

class Solution {
    private:
        void dfs(unordered_map <int, list <pair <int,int>>> &adj, unordered_map <int, bool> &visited, int node, vector <int> &weights){

            visited[node] = true;

            for(auto neighbour : adj[node]){
                weights.push_back(neighbour.second);
            }

            for(auto neighbour : adj[node]){
                if(!visited[neighbour.first]){
                    dfs(adj, visited, neighbour.first, weights);
                }
            }
        }
public:
    int minScore(int n, vector<vector<int>>& roads) {
        
        unordered_map <int, list <pair <int,int>>> adj;

        vector <int> weights;

        for(int i = 0 ; i < roads.size() ; i++){
            int u = roads[i][0];
            int v = roads[i][1];
            int w = roads[i][2];

            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }

        unordered_map <int, bool> visited;

        dfs(adj, visited, 1, weights);

        return *min_element(weights.begin(), weights.end());

    }
};

int main(){
  
  return 0;
}