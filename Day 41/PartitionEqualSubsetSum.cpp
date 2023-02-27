#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;


//BASIC RECURSION - TLE

class Solution {
    private:
        
        bool solve(vector <int> &nums, int i, int startSum, int endSum){
            
            if(startSum == endSum) return true;

            if( i >= nums.size()) return false;

            bool ans1 = solve(nums, i+1, startSum + nums[i], endSum - nums[i]);
            bool ans2 = solve(nums, i+1, startSum, endSum);

            return ans1 || ans2;

        }

public:
    bool canPartition(vector<int>& nums) {
        
        int sumArray = accumulate(nums.begin(), nums.end(), 0);

        return solve(nums, 0, 0, sumArray);

    }
};



int main(){
  
  return 0;
}