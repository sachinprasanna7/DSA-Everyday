#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector < vector <int> > answer;

        unordered_map <int, bool> mpp1;
        unordered_map <int, bool> mpp2;

        for(int i = 0 ; i < nums1.size() ; i++){
            mpp1[nums1[i]] = true;
        }

        for(int i = 0 ; i < nums2.size() ; i++){
            mpp2[nums2[i]] = true;
        }

        set <int> ans1;
        for(int i = 0 ; i < nums1.size() ; i++){
            if(mpp2[nums1[i]]) continue;
            else ans1.insert(nums1[i]);
        }

        set <int> ans2;
        for(int i = 0 ; i < nums2.size() ; i++){
            if(mpp1[nums2[i]]) continue;
            else ans2.insert(nums2[i]);
        }

        vector <int> v1;
        vector <int> v2;

        for(auto i : ans1){
            v1.push_back(i);
        }

        for(auto i : ans2){
            v2.push_back(i);
        }

        answer.push_back(v1);
        answer.push_back(v2);


        return answer;


    }
};

int main(){
  
  return 0;
}