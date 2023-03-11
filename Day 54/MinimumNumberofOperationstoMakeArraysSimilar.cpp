#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        
        sort(nums.begin(), nums.end());
        sort(target.begin(), target.end());

        long long answer = 0;

        vector <int> evenNums;
        vector <int> oddNums;
        vector <int> evenTarget;
        vector <int> oddTarget;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]&1) oddNums.push_back(nums[i]);
            else evenNums.push_back(nums[i]);

            if(target[i]&1) oddTarget.push_back(target[i]);
            else evenTarget.push_back(target[i]);
        }

        for(int i = 0 ; i < evenNums.size() ; i++){
            answer += abs((long long)evenNums[i] - (long long)evenTarget[i])/2;
        }

        for(int i = 0 ; i < oddNums.size() ; i++){
            answer += abs((long long)oddNums[i] - (long long)oddTarget[i])/2;
        }

        return answer / 2;


    }
};

int main(){
  
  return 0;
}