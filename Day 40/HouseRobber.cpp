#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//PURE RECURSION - TLE

class Solution {
    private:
        void solve(vector <int> &nums, int i, int sum, vector <int> &ans){

            if(i >= nums.size()){
                ans.push_back(sum);
                return;
            }
            solve(nums, i+2, sum + nums[i], ans);
            solve(nums, i+1, sum, ans);
        }

public:
    int rob(vector<int>& nums) {

        vector <int> ans;
        solve(nums, 0, 0, ans);
        return *max_element(ans.begin(), ans.end());
    }
};



//RECURSION + MEMORISATION

class Solution {
    private:
        int solve(vector <int> &nums, int i, vector <int> &dp){

            if(i >= nums.size()){
                return 0;
            }

            if(dp[i] != -1) return dp[i];

            int include = solve(nums, i+2, dp) + nums[i];
            int exclude = solve(nums, i+1, dp) + 0;

            dp[i] = max(include, exclude);

            return dp[i];
        }

public:
    int rob(vector<int>& nums) {
        
        vector <int> dp(nums.size(), -1);
        return solve(nums, 0, dp);
    }
};


//TABULATION

class Solution {
    private:

        int solve(vector <int> &nums){

            vector <int> dp (nums.size() + 2, -1);

            dp[nums.size() + 1] = 0;
            dp[nums.size()] = 0;

            int i = nums.size() - 1;

            while(i >= 0){
                int include = dp[i+2] + nums[i];
                int exclude = dp[i+1] + 0;

                dp[i] = max(include, exclude);
                i--;
            }

            return dp[0];

        }

public:
    int rob(vector<int>& nums) {
        
        return solve(nums);
    }
};


//TABULATION - CONSTANT SPACE

class Solution {
    private:

        //TOTALLY OPTIMISED

        int solve(vector <int> &nums){

            int succ2 = 0;
            int succ1 = 0;

            int i = nums.size() - 1;

            while(i >= 0){
                int include = succ2 + nums[i];
                int exclude = succ1 + 0;

                int curr = max(include, exclude);
                
                succ2 = succ1;
                succ1 = curr;
                i--;
            }

            return succ1;

        }

public:
    int rob(vector<int>& nums) {
        
        return solve(nums);
    }
};



int main(){
  
  return 0;
}