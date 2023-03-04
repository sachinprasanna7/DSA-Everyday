#include <iostream>
#include <vector>
using namespace std;

class Solution {
    private:
        int solve(int num){
            int ans = 0;

            while(num != 0){
                ans += num%10;
                num /= 10;
            }

            return ans;
        }
public:
    int differenceOfSum(vector<int>& nums) {
        
        int elementSum = 0;
        int digitSum = 0;
    
        for(int i = 0 ; i < nums.size() ; i++){
            
            elementSum += nums[i];
            if(nums[i] <= 9){
                digitSum += nums[i];
            }
            else{
                digitSum += solve(nums[i]);
            }
        }

        return elementSum - digitSum;
    }
};

int main(){
  
  return 0;
}