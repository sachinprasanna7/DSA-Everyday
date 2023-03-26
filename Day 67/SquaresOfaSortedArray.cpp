#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector <int> answer; 

        for(int i = 0 ; i < nums.size() ; i++){
            answer.push_back(pow(nums[i], 2));
        }

        sort(answer.begin(), answer.end());

        return answer;
    }
};

int main(){
  
  return 0;
}