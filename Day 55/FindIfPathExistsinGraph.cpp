#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

class Solution {
    private:

        bool bfs(unordered_map <int, list<int>> &adjList, int source, int destination, unordered_map <int, bool> &visited){

            queue <int> q;
            q.push(source);
            visited[source] = true;

            while(!q.empty()){
                int front = q.front();
                q.pop();

                for(auto neighbour : adjList[front]){
                    if(!visited[neighbour]){
                        q.push(neighbour);
                        visited[neighbour] = true;
                        if(neighbour == destination) return true;
                    }
                }
            }

            return false;
        }

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        if(source == destination) return true;
        
        unordered_map <int, list<int>> adjList;

        for(int i = 0 ; i < edges.size() ; i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        unordered_map <int, bool> visited;

        return bfs(adjList, source, destination, visited);

    }
};

int main(){
  
  return 0;
}