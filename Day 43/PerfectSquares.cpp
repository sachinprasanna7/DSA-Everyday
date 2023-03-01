#include <iostream>
#include <Vector>
using namespace std;


//RECURSIVE SOLUTION - TLE

class Solution {
    private:
        int solve(vector <int> &possibleSquares, int n){

            if(n == 0) return 0;

            if(n < 0) return 10000;

            int ans = 10000;

            for(int i = 0; i < possibleSquares.size() ; i++){
                ans = min(ans, 1 + solve(possibleSquares, n - possibleSquares[i]));
            }

            return ans;
        }

public:
    int numSquares(int n) {
        
        vector <int> possibleSquares;

        for(int i = 1 ; i <= n ; i++){

            int num = i*i;
            if(num > n) break;

            possibleSquares.push_back(num);
        }

        return solve(possibleSquares, n);
    }
};

//RECURSION + MEMORISATION

class Solution {
    private:
        int solve(vector <int> &possibleSquares, int n, vector <int> &dp){

            if(n == 0) return 0;

            if(n < 0) return 10000;

            if(dp[n] != -1) return dp[n];

            int ans = 10000;

            for(int i = 0; i < possibleSquares.size() ; i++){
                ans = min(ans, 1 + solve(possibleSquares, n - possibleSquares[i], dp));
            }

            dp[n] = ans;
            return dp[n];
        }

public:
    int numSquares(int n) {
        
        vector <int> possibleSquares;

        for(int i = 1 ; i <= n ; i++){

            int num = i*i;
            if(num > n) break;

            possibleSquares.push_back(num);
        }

        vector <int> dp(n+1, -1);
        return solve(possibleSquares, n, dp);
    }
};


//TABULATION - LINEAR SPACE (MOST OPTIMAL)

class Solution {
    private:

        int solveTab(int n){

            vector <int> dp(n+1, 10000);

            dp[0] = 0;
            dp[1] = 1;

            for(int i = 2; i <= n ; i++){
                
                for(int j = 1; j*j <=i ; j++){
                    int temp = j*j;
                    dp[i] = min(dp[i], 1 + dp[i - temp]);
                }
            }
            
            return dp[n];
        }

public:
    int numSquares(int n) {

        return solveTab(n);
    }
};




int main(){
  
  return 0;
}