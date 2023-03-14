#include <iostream>
#include <vector> 
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        unordered_map <int,int> mpp;

        for(int i = 0 ; i < nums.size() ; i++){
            if(!(nums[i]&1)) mpp[nums[i]]++;
        }

        if(mpp.size() == 0) return -1;

        int answer = 0;
        int count = 0;

        for(auto i : mpp){
            if(i.second > count){
                answer = i.first;
                count = i.second;
            }
            else if(i.second == count){
                answer = min(answer, i.first);
            }
        }

        return answer;
    }
};

int main(){
  
  return 0;
}