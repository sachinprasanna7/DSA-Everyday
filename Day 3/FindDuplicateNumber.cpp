#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int findDuplicate(vector<int>& nums) {     //Didnt Work for all test cases
        
        int n = nums.size()-1;
        int ans = (n*(n+1))/2;

        int sum = 0;
        int num = nums[0];
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            if(i == 0) continue;
            else{
                if (nums[i] == nums[0])  return nums[0];
            }
        }
        return sum - ans;
    }


int findDuplicate2(vector<int>& nums) {     //Brute Force
        
        int n = nums.size();
        if(n == 1) return nums[0];
        for(int i = 0; i < n-1 ; i++){
            for(int j = i+1; j < n ; j++){
                if(nums[i] == nums[j])
                    return nums[i];
            }
        }

        return 0;
    }

int findDuplicate3(vector<int>& nums){    //Sorted it
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        int num = nums[0];
        for(int i = 1 ; i < n ; i++){
            if(nums[i] == num)
                return nums[i];
            else num = nums[i];
        }
}


int findDuplicate4(vector<int>& nums) {             //Using HASH TABLE
        
        int n = nums.size();
        unordered_map <int,int> mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[nums[i]]++;
        }

        for(auto j : mpp){
            if(j.second != 1) return j.first;
        }

        return 0;
}


int findDuplicate5(vector<int>& nums) {      //MOST OPTIMAL APPROACH
        
        int slow = 0, fast = 0;
    do {
      slow = nums[slow];
      fast = nums[nums[fast]];
    } while (slow != fast);

    
    slow = 0;
    while (slow != fast) {
      slow = nums[slow];
      fast = nums[fast];
    }
    return slow;     
}


int main(){
  
  return 0;
}