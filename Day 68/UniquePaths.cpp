#include <iostream>
#include <vector>
using namespace std;

//RECURSIVE - TLE

class Solution {
    private:

        int solve(int m, int n, int i, int j){

            if(i == m - 1 && j == n - 1) return 1;

            else if(j == n - 1){
                return solve(m, n, i+1, j);
            }

            else if(i == m - 1){
                return solve(m, n, i, j+1);
            }

            int goRight = solve(m, n, i, j+1);
            int goDown = solve(m, n, i+1, j);
            

            return goRight + goDown;
        }

public:
    int uniquePaths(int m, int n) {
        return solve(m, n, 0, 0);
    }
};


//MEMOIZATION - OPTIMAL

class Solution {
    private:

        int solve(int m, int n, int i, int j, vector <vector <int>> &dp){

            if(i == m - 1 && j == n - 1) return 1;

            else if(j == n - 1){
                return solve(m, n, i+1, j, dp);
            }

            else if(i == m - 1){
                return solve(m, n, i, j+1, dp);
            }

            if(dp[i][j] != -1) return dp[i][j];

            int goRight = solve(m, n, i, j+1, dp);
            int goDown = solve(m, n, i+1, j, dp);
            
            dp[i][j] = goRight + goDown;
            return dp[i][j];
        }

public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(m, n, 0, 0, dp);
    }
};

int main(){
  
  return 0;
}