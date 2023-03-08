#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();

        for(int i = 0; i < rows ; i++)
            sort(grid[i].begin(), grid[i].end());

        int answer = 0;

        for(int i = 0 ; i < cols ; i++){
            
            int maxi = grid[0][i];

            for(int j = 1 ; j < rows ; j++){
                maxi = max(maxi, grid[j][i]); 
            }

            answer += maxi;
        }

        return answer;
    }
};

int main(){
  
  return 0;
}