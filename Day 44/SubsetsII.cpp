#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:

    bool check(vector<vector<int>>& ans, vector<int>& output) {
        for (const auto& vector : ans) {
            if (vector == output) {
                return true;
            }
        }
        return false;
    }

    void solve(vector<int> nums, vector<int> output, int i, vector<vector<int> >& ans) {

        if(i >= nums.size()) {
            sort(output.begin(), output.end());
            if(check(ans, output))
                return;
            else{
                ans.push_back(output);
                return ;
            }
        }
      
        solve(nums, output, i+1, ans);
        
        output.push_back(nums[i]);
        solve(nums, output, i+1, ans);
        
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int> > ans;
        vector<int> output;
        solve(nums, output, 0, ans);
        return ans;
        
    }
};

int main(){
  
  return 0;
}