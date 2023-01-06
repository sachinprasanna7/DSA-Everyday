#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector <int> evenVector;
        vector <int> oddVector;
        vector <int> ans;

        for(int i = 0 ; i < nums.size() ; i++){
            if(i % 2 == 0) evenVector.push_back(nums[i]);
            else oddVector.push_back(nums[i]);
        }

        sort(evenVector.begin(), evenVector.end());
        sort(oddVector.begin(), oddVector.end() , greater<int>());

        for(int i = 0 ; i < nums.size() ; i++){
            if(i % 2 == 0) ans.push_back(evenVector[i/2]);
            else ans.push_back(oddVector[i/2]);
        }

        return ans;
    }
};

int main(){
  
  return 0;
}