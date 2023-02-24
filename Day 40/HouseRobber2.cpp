#include <iostream>
#include <vector>
using namespace std;

class Solution {

    private: 
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
        
        if(nums.size() == 1) return nums[0];
        else if(nums.size() == 2) return max(nums[0], nums[1]);

        vector <int> vec1 (nums.begin() + 1, nums.begin() + nums.size());
        vector <int> vec2 (nums.begin(), nums.begin() + nums.size() - 1);

        return max(solve(vec1), solve(vec2));
    }
};

int main(){
  
  return 0;
}