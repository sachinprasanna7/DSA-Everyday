#include <iostream>
using namespace std;

#define MOD 1000000007
#include <vector>


// RECURSION + MEMORISATION

long long int solve(int n, vector <int> &dp) {

  if (n == 1)
    return 0;
  if (n == 2)
    return 1;

    if(dp[n] != -1) return dp[n];

  dp[n] = (((n - 1) % MOD) *
       (((solve(n - 1, dp) % MOD) + (solve(n - 2, dp) % MOD)) %
        MOD)) %  MOD;
  return dp[n];
}

long long int countDerangements(int n){
    
    vector <int> dp (n+1, -1);
    dp[1] = 0;
    dp[2] = 1;

    return solve(n, dp);
}


//PLAIN RECUSTION - TLE

long long int countDerangements1(int n) {

  if (n == 1)
    return 0;
  if (n == 2)
    return 1;

  int ans =
      (((n - 1) % MOD) *
       (((countDerangements1(n - 1)) % MOD + (countDerangements1(n - 2)) % MOD) %
        MOD)) %
      MOD;
  return ans;
}

//TABULATION

long long int countDerangements2(int n){
    
    vector <long long int> dp(n+1, -1);
    dp[1] = 0;
    dp[2] = 1;

    for(int i = 3 ; i < n+1 ; i++){
        dp[i] = (((i - 1) % MOD) *
       (((dp[i-1] % MOD) + (dp[i-2] % MOD)) %
        MOD)) %  MOD;
    }

    return dp[n];
}


//TABULATION IN CONSTANT SPACE

long long int countDerangements3(int n){
    
    vector <long long int> dp(n+1, -1);
    long long int prev1 = 0;
    long long int prev2 = 1;

    for(int i = 3 ; i < n+1 ; i++){
        int curr = (((i - 1) % MOD) *
       (((prev2 % MOD) + (prev1 % MOD)) %
        MOD)) %  MOD;

        prev1 = prev2;
        prev2 = curr;
    }

    return prev2;
}



int main(){
  
  return 0;
}