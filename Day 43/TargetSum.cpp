#include <iostream>
#include <vector>
using namespace std;

//ONLY RECURSION - NO TLE SURPRISING!

class Solution {
    private:

        int solve(vector <int> & nums, int i, int curr, int target){

            if(i >= nums.size() && curr == target){
                return 1;
            }

            if(i >= nums.size() && curr != target){
                return 0;
            }

            int ans1 = solve(nums, i+1, curr + nums[i], target);
            int ans2 = solve(nums, i+1, curr - nums[i], target);

            return ans1 + ans2;

        }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        return solve(nums, 0, 0, target);
        
    }
};



int main(){
  
  return 0;
}