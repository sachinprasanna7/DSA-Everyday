#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long answer = 0;

        long long gap = 0;

        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == 0) gap++;
            else{
                answer += (gap*(gap+1))/2;
                gap = 0;
            }
        }

        return answer + (gap*(gap+1))/2;
    }
};

int main(){
  
  return 0;
}