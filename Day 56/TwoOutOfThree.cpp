#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        set <int> ans;

        unordered_map <int, bool> mpp;
        unordered_map <int, bool> mpp1;

        for(int i = 0 ; i < nums1.size() ; i++){
            mpp[nums1[i]] = true;
        }

        for(int i = 0 ; i < nums2.size() ; i++){
            if(mpp[nums2[i]]) ans.insert(nums2[i]);
            else mpp1[nums2[i]] = true;
        }

        for(int i = 0 ; i < nums3.size() ; i++){
            if(mpp[nums3[i]]) ans.insert(nums3[i]);
            if(mpp1[nums3[i]]) ans.insert(nums3[i]);
        }

        vector <int> answer;

        for(auto node : ans) answer.push_back(node);
        return answer;
    }
};

int main(){
  
  return 0;
}