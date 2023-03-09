#include <iostream>
#include <vector>
using namespace std;

class Solution {

    private:
        int solve(int n, vector <int> &dp){
            
            if(n == 1 || n == 0) return 1;

            int ans = 1;

            if(dp[n] != -1) return dp[n];

            for(int i = 1 ; i <= n ; i++){
                ans = max(ans, i * solve(n - i, dp));
            }

            dp[n] = ans;

            return dp[n];
        }
public:
    int integerBreak(int n) {

        if(n == 2) return 1;
        if(n == 3) return 2;

        vector <int> dp(n+1, -1);

        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        
        return solve(n, dp);
    }
};

int main(){
  
  return 0;
}