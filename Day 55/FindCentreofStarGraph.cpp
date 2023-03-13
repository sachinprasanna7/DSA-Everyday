#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <list>

using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        unordered_map <int, list <int>> adjList;

        set <int> uniqueNodes;

        for(int i = 0 ; i < edges.size() ; i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adjList[u].push_back(v);
            adjList[v].push_back(u);

            uniqueNodes.insert(u);
            uniqueNodes.insert(v);
        }

        int n = uniqueNodes.size();

        for(auto i : adjList){
            int temp = 0;
            for(auto j : i.second){
                temp++;
            }

            if(temp == n-1){
                return i.first;
            }
        }

        return 0;
    }
};


//EASIER APPROACH

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        int center = edges[0][0];
        if(edges[1][0] != center && edges[1][1] != center)
            center = edges[0][1];
        return center;        
    }
};


int main(){
  
  return 0;
}