#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;


//ADJACENCY MATRIX

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {

        
        vector <vector <int>> adjMatrix(n+1, vector<int>(n+1, 0));

        for(int i = 0 ; i < t.size() ; i++){
            int u = t[i][0];
            int v = t[i][1];

            adjMatrix[u][v] = 1;
        }

        for(int i = 1 ; i < n+1 ; i++){
            
            int count = 0;

            for(int j = 1 ; j < n+1 ; j++){
                count += adjMatrix[j][i];
            }

            if(count == n-1){
                int ct = 0;
                for(int k = 1 ; k < n+1 ; k++){
                    ct += adjMatrix[i][k];
                }
                if(ct == 0) return i;
            }
        }

        return -1;
    }
};


//PAIR METHOD

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {

        vector <pair <int, int>> count;

        for(int i = 0 ; i < n + 1 ; i++){
            count.push_back({0,0});
        }

        for(int i = 0 ; i < t.size() ; i++){
            int u = t[i][0];
            int v = t[i][1];

            count[u].first++;
            count[v].second++;
        }

        for(int i = 1 ; i < count.size() ; i++){
            if(count[i].first == 0 && count[i].second == n-1) return i;
        }

        return -1;
    }
};

int main(){
  
  return 0;
}