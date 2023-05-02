#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {

        int negativeCount = 0;

        for (int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0) return 0;
            else if(nums[i] < 0) negativeCount++;
        }
        
        return negativeCount%2 == 0 ? 1 : -1;
        
    }
};

int main(){
  
  return 0;
}