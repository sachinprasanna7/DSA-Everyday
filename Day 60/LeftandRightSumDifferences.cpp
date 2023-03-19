#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        int rightSum = accumulate(nums.begin(), nums.end(), 0);

        int leftSum = 0;

        vector <int> ans;

        for(int i = 0 ; i < nums.size() ; i++){
            rightSum -= nums[i];
            ans.push_back(abs(leftSum - rightSum));
            leftSum += nums[i];
        }

        return ans;
    }
};

int main(){
  
  return 0;
}