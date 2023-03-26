#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int answer = -1;
    void dfs(int node, vector<int> &edges, unordered_map<int, int> &dist, vector<bool> &visited){

        visited[node] = true;
        int neighbour = edges[node];

        if (neighbour != -1 && !visited[neighbour]){
            dist[neighbour] = dist[node] + 1;
            dfs(neighbour, edges, dist, visited);
        }
        else if (neighbour != -1 && dist.count(neighbour)) answer = max(answer, dist[node] - dist[neighbour] + 1);
        
    }

    int longestCycle(vector<int> &edges){
        int n = edges.size();
        vector<bool> visited(n);
        for (int i = 0; i < n; i++){
            if (!visited[i]){
                unordered_map<int, int> dist;
                dist[i] = 1;
                dfs(i, edges, dist, visited);
            }
        }

        return answer;
    }
};

int main()
{

    return 0;
}