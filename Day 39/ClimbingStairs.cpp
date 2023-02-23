#include <iostream>
#include <vector>
using namespace std;


//DP - MEMORIZATION AND RECURSION

class Solution {
public:
    int solve(int n,vector<int> &dp){

        if(n<=2)
          return n;
        
        if(dp[n]!=-1) 
          return dp[n]; 
        
        dp[n]=solve(n-1, dp)+solve(n-2, dp);
        return dp[n];
    }
    int climbStairs(int n) {

        if(n<=2) return n;
        vector<int> dp(n+1, -1);
        
        return solve(n,dp);
    }
};


//DP - TABULATION
class Solution {
        
public:
    int climbStairs(int n) {
        
        vector <int> dp (n+1);

            dp[0] = 1;
            dp[1] = 1;

            for(int i = 2 ; i < n+1 ; i++){
                dp[i] = dp[i-1] + dp[i-2];
            }

            return dp[n];
    }
};

int main(){
  
  return 0;
}