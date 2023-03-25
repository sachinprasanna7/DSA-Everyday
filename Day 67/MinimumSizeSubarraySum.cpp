#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int ans = INT_MAX, prefixSum = 0, startPtr = 0, endPtr = 0;

        while(endPtr < nums.size()){
            prefixSum += nums[endPtr];

            if(prefixSum >= target){
              ans = min(ans, endPtr - startPtr + 1);
              prefixSum -= nums[startPtr++];
            }

            while(prefixSum >= target){
                ans = min(ans, endPtr - startPtr + 1);
                prefixSum -= nums[startPtr++];
            }

            endPtr++;
        }
        
        return (ans == INT_MAX) ? 0 : ans;

    }
};

int main(){
  
  return 0;
}