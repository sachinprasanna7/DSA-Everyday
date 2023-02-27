#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


//BASIC RECURSION - TLE

class Solution {
    private:
        

        //BASIC RECURSION - TLE

        bool solve(vector <int> &nums, int i, int startSum, int endSum){
            
            if(startSum == endSum) return true;

            if( i >= nums.size()) return false;

            bool ans1 = solve(nums, i+1, startSum + nums[i], endSum - nums[i]);
            bool ans2 = solve(nums, i+1, startSum, endSum);

            return ans1 || ans2;

        }

        //RECURSION + MEMORISATION

        int solveMem(vector <int> &nums, int i, int startSum, vector <vector <int>> &dp ){
            
            
            if(i >= nums.size()) return 0;

            if(startSum < 0) return 0;

            if(startSum == 0) return 1;

            if(dp[i][startSum] != -1) return dp[i][startSum];

            int ans1 = solveMem(nums, i+1, startSum - nums[i], dp);
            int ans2 = solveMem(nums, i+1, startSum, dp);


            dp[i][startSum] =  ans1 || ans2;

            return dp[i][startSum];

        }

public:
    bool canPartition(vector<int>& nums) {
        
        int sumArray = accumulate(nums.begin(), nums.end(), 0);

        if(sumArray % 2 == 1) return false;
        sumArray /= 2;

        vector <vector <int>> dp (nums.size(), vector<int> (sumArray + 1, -1));

        int ans = solveMem(nums, 0, sumArray, dp);
        if (ans) return true;

        return false;

    }
};



int main(){
  
  return 0;
}