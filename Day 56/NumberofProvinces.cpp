#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;

class Solution
{
private:
    void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjList)
    {

        visited[node] = true;

        for (auto i : adjList[node])
        {
            if (!visited[i])
            {
                dfs(i, visited, adjList);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {

        unordered_map<int, list<int>> adjList;

        for (int i = 0; i < isConnected.size(); i++)
        {
            for (int j = 0; j < isConnected[i].size(); j++)
            {
                if (isConnected[i][j])
                {
                    adjList[i + 1].push_back(j + 1);
                }
            }
        }

        unordered_map<int, bool> visited;

        int ans = 0;

        for (int i = 0; i < isConnected.size(); i++)
        {
            if (!visited[i + 1])
            {
                ans++;
                dfs(i + 1, visited, adjList);
            }
        }

        return ans;
    }
};

int main()
{

    return 0;
}