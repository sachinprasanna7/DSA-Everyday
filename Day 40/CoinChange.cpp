#include <iostream>
#include <vector>

using namespace std;

//MEMORISATION + RECURSION

class Solution {

    private:

        int solve(vector <int>& coins, int amount, vector <int> &dp){
            
            if(amount ==  0) return 0;

            if(amount < 0) return INT_MAX;

            if(dp[amount] != -1) return dp[amount];

            int answer = INT_MAX;

            for(int i = 0; i < coins.size() ; i++){

                int tempAnswer = solve(coins, amount - coins[i], dp);
                
                if(tempAnswer != INT_MAX) answer = min(answer, 1+tempAnswer);
            }

            dp[amount] = answer;

            return answer;
        }

public:
    int coinChange(vector<int>& coins, int amount) {

        vector <int> dp (amount+1, -1);
        
        int ans = solve(coins, amount, dp);

        if(ans == INT_MAX) return -1;

        return ans;
    }
};

//TABULATION

class Solution {

    private:

        int solve(vector <int>& coins, int amount){
            
            vector <int> dp (amount + 1, INT_MAX);

            dp[0] = 0;

            for(int i = 1 ; i < amount + 1 ; i++){
                int j = coins.size() - 1;
                while(j >= 0){
                    if(i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX) dp[i] = min(dp[i], 1+ dp[i - coins[j]]);
                    j--;
                }
            }

            if (dp[amount] == INT_MAX) return -1;
            return dp[amount];
        }
        
public:
    int coinChange(vector<int>& coins, int amount) {

        return solve(coins, amount);
    }
};

int main(){
  
  return 0;
}