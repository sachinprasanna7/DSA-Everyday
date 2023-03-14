#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map <int,int> mpp;

        for(int i = 0 ; i < nums.size() ; i++){
            mpp[nums[i]]++;
        }

        vector <int> ans;

        for(auto i : mpp){
            if(i.second > (nums.size()/3)) ans.push_back(i.first);
        }

        return ans;
        
    }
};

int main(){
  
  return 0;
}