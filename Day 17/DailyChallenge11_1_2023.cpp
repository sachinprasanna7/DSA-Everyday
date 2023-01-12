#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    pair<int,bool> Solve(int node, vector<int> adj[], vector<bool> &hasApple, vector<int> &isVisited){
        isVisited[node] = -1;
        int pFirst = 0;
        int pSecond = false;
        for(auto e : adj[node]){
            if(isVisited[e] == 0){
                pair<int,bool> child = Solve(e, adj, hasApple, isVisited);
                if(child.second == true) pFirst += child.first;
            }
        }

        if(hasApple[node] == true || pFirst != 0) pFirst += 1;
        if(pFirst != 0) pSecond = true;
                
        return {pFirst, pSecond};
    }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<int> adj[n];
        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int> isVisited(n,0);
        pair<int,bool> ans =  Solve(0, adj, hasApple, isVisited);

        if(!(ans.first)) return 0;
        return 2*(ans.first-1);
        
    }
};

int main(){
  
  return 0;
}