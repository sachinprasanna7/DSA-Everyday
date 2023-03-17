#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map <int, int> mpp;

        for(int i = 0 ; i < nums1.size() ; i++){
            mpp[nums1[i]] = true;
        }

        set <int> answer;

        for(int i = 0 ; i < nums2.size() ; i++){
            if(mpp.find(nums2[i]) != mpp.end()) answer.insert(nums2[i]);
        }

        vector <int> ans;

        for(auto i : answer){
            ans.push_back(i);
        }

        return ans;
    }
};

int main(){
  
  return 0;
}
