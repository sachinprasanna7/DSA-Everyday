#include <iostream>
#include <vector>
using namespace std;



//BOTTOM UP DP

class Solution {
    private:

        int dpFib(int n, vector <int> &dp){

            for(int i = 2; i <= n ; i++){
                dp[i] = dp[i-1] + dp[i-2];
            }

            return dp[n];
        }

public:
    int fib(int n) {
        
        if(n == 0) return 0;
        else if(n == 1) return 1;

        vector <int> dp(n+1);

        dp[0] = 0;
        dp[1] = 1;
        return dpFib(n, dp);
    }
};



//TOP DOWN DP

class Solution {
    private:

        int dpFib(int n, vector <int> &dp){

            if(n <= 1) return n;
            if(dp[n] != -1) return dp[n];

            dp[n] = dpFib(n-1,dp) + dpFib(n-2,dp);

            return dp[n];
        }

public:
    int fib(int n) {
        
        vector <int> dp(n+1);

        for(int i = 0 ; i < n+1 ; i++){
            dp[i] = -1;
        }

        int ans = dpFib(n, dp);

        return ans;
        
    }
};

int main(){
  
  return 0;
}