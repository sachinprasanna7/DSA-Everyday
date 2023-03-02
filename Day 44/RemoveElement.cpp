#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//SOLUTION WITHOUT SORTING

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){
            if(nums[start] == val && nums[end] != val){
                swap(nums[start++], nums[end--]);
            }
            else if(nums[start] == val && nums[end] == val){
                end--;
            }
            else if(nums[start] != val && nums[end] != val){
                start++;
            }
            else{
                start++;
                end--;
            }
        }

        return start;
    }
};

//WITH SORTING - AS MENTIONED IN THE QUESTION

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){
            if(nums[start] == val && nums[end] != val){
                swap(nums[start++], nums[end--]);
            }
            else if(nums[start] == val && nums[end] == val){
                end--;
            }
            else if(nums[start] != val && nums[end] != val){
                start++;
            }
            else{
                start++;
                end--;
            }
        }

        sort(nums.begin(), nums.begin() + start);

        return start;
    }
};

int main(){
  
  return 0;
}