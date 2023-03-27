#include <iostream>
#include <vector>
using namespace std;


//RECURSIVE - TLE

class Solution {
    private:

        int solve(vector<vector<int>>& grid, int i, int j){

            if(i == grid.size() - 1 && j == grid[0].size() - 1) return grid[i][j];

            else if(j == grid[0].size() - 1){
                return grid[i][j] + solve(grid, i+1, j);
            }

            else if(i == grid.size() - 1){
                return grid[i][j] + solve(grid, i, j+1);
            }

            int goRight = grid[i][j] + solve(grid, i, j+1);
            int goDown = grid[i][j] + solve(grid, i+1, j);
            

            return min(goRight, goDown);
        }

public:
    int minPathSum(vector<vector<int>>& grid) {
        return solve(grid, 0, 0);
    }
};


//MEMOIZATION - OPTIMAL

class Solution {
    private:

        int solve(vector<vector<int>>& grid, int i, int j, vector <vector <int>> &dp){

            if(i == grid.size() - 1 && j == grid[0].size() - 1) return grid[i][j];

            else if(j == grid[0].size() - 1){
                return grid[i][j] + solve(grid, i+1, j, dp);
            }

            else if(i == grid.size() - 1){
                return grid[i][j] + solve(grid, i, j+1, dp);
            }

            if(dp[i][j] != -1) return dp[i][j];

            int goRight = grid[i][j] + solve(grid, i, j+1, dp);
            int goDown = grid[i][j] + solve(grid, i+1, j, dp);

            dp[i][j] = min(goRight, goDown);

            return dp[i][j];
        }

public:
    int minPathSum(vector<vector<int>>& grid) {

        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        
        return solve(grid, 0, 0, dp);
    }
};

int main(){
  
  return 0;
}