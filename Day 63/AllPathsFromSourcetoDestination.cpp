#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

int main(){
  
  return 0;
}

class Solution {

    private:

        void dfs(unordered_map <int, list <int>> &adj, int node, int target, vector <int> component, vector <vector <int>> & answer){
            
            component.push_back(node);

            if(node == target){
                answer.push_back(component);
                return ;
            }

            for(auto neighbour : adj[node]){
                dfs(adj, neighbour, target, component, answer);
            }
        }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        unordered_map <int, list <int>> adj;

        for(int i = 0 ; i < graph.size() ; i++){
            for(int j = 0 ; j < graph[i].size() ; j++){
                adj[i].push_back(graph[i][j]);
            }
        }

        int target = graph.size() - 1;

        vector <int> component;
        vector <vector <int>> answer;

        dfs(adj, 0, target, component, answer);

        return answer;

    }
};