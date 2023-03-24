#include <iostream>
#include <vector>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        
        unordered_map <int, list < pair <int, int>>> adj;
    
    for (int i = 0 ; i < connections.size() ; i++){
        
        int u = connections[i][0];
        int v = connections[i][1];
        
        adj[u].push_back(make_pair(v,0));
        adj[v].push_back(make_pair(u,1));
    }
    
    //outgoing edge is 0
    //incoming edge is 1 
    
    int answer = 0;
    
    unordered_map <int, bool> visited;

    queue <int> q;
    
    q.push(0);
    visited[0] = true;
    
    while (!q.empty()){
        
        int front = q.front();
        q.pop();
        
        for(auto i : adj[front]){
            
            if(!visited[i.first]){
                q.push(i.first);
                visited[i.first] = true;
                if(!i.second) answer++;
            }
        }
    }
    
    return answer;
    }
};


int main(){
  
  return 0;
}