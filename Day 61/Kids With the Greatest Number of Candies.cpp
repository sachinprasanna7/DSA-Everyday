#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector <bool> answer;

        int maxi = *max_element(candies.begin(), candies.end());

        for(int i = 0 ; i < candies.size() ; i++){
            if(candies[i] + extraCandies >= maxi) answer.push_back(true);
            else answer.push_back(false);
        }

        return answer;
    }
};

int main(){
  
  return 0;
}