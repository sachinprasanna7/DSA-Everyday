#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <list>
#include <queue>

using namespace std;

class Solution {
    private:

        void dfs(unordered_map <int, list <int>> &adjList, unordered_map <int, bool> &visited, int node){

            visited[node] = true;

            for(auto neighbour : adjList[node]){
                if(!visited[neighbour]){
                    dfs(adjList, visited, neighbour);
                }
            }
        }

public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        unordered_map <int, list <int>> adjList;

        for(int i = 0 ; i < rooms.size() ; i++){
            for(int j = 0; j < rooms[i].size() ; j++){
                adjList[i].push_back(rooms[i][j]);
            }
        }

        unordered_map <int, bool> visited;

        int component = 0;

        for(int i = 0 ; i < rooms.size() ; i++){
            if(!visited[i]){
                component++;
                dfs(adjList, visited, i);
            }
        }
        
        if(component == 1) return true;
        return false;

    }
};

int main(){
  
  return 0;
}