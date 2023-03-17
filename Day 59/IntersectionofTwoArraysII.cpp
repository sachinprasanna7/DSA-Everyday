#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map <int, int> mpp;

        for(int i = 0 ; i < nums1.size() ; i++){
            mpp[nums1[i]]++;
        }

        vector <int> answer;

        for(int i = 0 ; i < nums2.size() ; i++){
            if(mpp[nums2[i]]-- > 0) answer.push_back(nums2[i]);
    
        }

        return answer;
    }
};

int main(){
  
  return 0;
}