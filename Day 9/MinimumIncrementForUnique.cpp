#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class TLE {      //Time Limit Exceeded solution
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        int ans = 0;
        sort(nums.begin() , nums.end());

        for(int i = 0 ; i < nums.size() -1 ; i++){
            while(nums[i+1] <= nums[i]){
                ans++;
                nums[i+1]++;
            }
        }

        return ans;
    }
};


class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        int ans = 0;
        sort(nums.begin() , nums.end());

        for(int i = 0 ; i < nums.size() - 1 ; i++){
            if(nums[i+1] <= nums[i]){
                int temp = nums[i+1];
                nums[i+1] = nums[i]+1;
                ans += nums[i+1] - temp;
            }
        }
        return ans;
    }
};

int main(){
  
  return 0;
}