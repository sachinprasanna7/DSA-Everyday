#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {

    private:

        int findStart(vector <int> &nums, int target){
            
            int start = 0; 
            int end = nums.size() - 1;

            int ans = -1;
            int mid = start + (end - start)/2;

            while(start <= end){
                if(nums[mid] == target){
                    ans = mid;
                    end = mid - 1;
                }
                else if(nums[mid] < target){
                    start = mid + 1;
                }
                else end = mid - 1;

                mid = start + (end - start)/2;
            }

            return ans;
        }

        int findEnd(vector <int> &nums, int target){
            
            int start = 0; 
            int end = nums.size() - 1;

            int ans = -1;
            int mid = start + (end - start)/2;

            while(start <= end){
                if(nums[mid] == target){
                    ans = mid;
                    start = mid + 1;
                }
                else if(nums[mid] < target){
                    start = mid + 1;
                }
                else end = mid - 1;

                mid = start + (end - start)/2;
            }

            return ans;
        }
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());

        int start = findStart(nums, target);
        int end = findEnd(nums, target);

        vector <int> ans;

        if(start == -1){
            return ans;
        }

        while(start <= end){
            ans.push_back(start++);
        }

        return ans;
    }
};

int main(){
  
  return 0;
}