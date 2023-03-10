#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int solve(vector<int>&nums,int i, int j){

        if(i>j) return 0;
        
        if(i==j) return nums[i];
        
        int attempt1 = nums[i] + min(solve(nums,i+2,j),solve(nums,i+1,j-1));
        int attempt2 = nums[j] + min(solve(nums,i+1,j-1),solve(nums,i,j-2));
 
        return max(attempt1 , attempt2);
    }

    bool PredictTheWinner(vector<int>& nums) {

        int score = solve(nums,0,nums.size()-1);
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        
        if(2 * score >= totalSum) return true;
        
        return false;
    }
};

int main(){
  
  return 0;
}