#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int ans = 0;
        unordered_map <int,int> mpp;

        for(int i = 0 ; i < nums.size() ; i++){
            mpp[nums[i]]++;
        }

        for(auto i : mpp){
            if(i.second == 1){
                ans += i.first;
            }
        }

        return ans;
    }
};

int main(){
  
  return 0;
}