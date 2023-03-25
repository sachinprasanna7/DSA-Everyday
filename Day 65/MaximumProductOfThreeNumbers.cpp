#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int answer = INT_MIN;

        for(int i = 0 ; i < nums.size() - 2 ; i++){
            answer = max(answer, nums[i] * nums[i+1] * nums[nums.size() - 1]);
        }

        return answer;
    }
};

int main(){
  
  return 0;
}