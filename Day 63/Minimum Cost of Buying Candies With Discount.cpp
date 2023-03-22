#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        sort(cost.begin(), cost.end());

        int candyCount = 0;

        int answer = 0;

        for(int i = cost.size() - 1 ; i >= 0 ; i--){
            candyCount++;
            if(candyCount == 3){
                candyCount = 0;
                continue;
            }
            answer += cost[i];
        }

        return answer;
    }
};

int main(){
  
  return 0;
}