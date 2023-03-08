#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int rows = accounts.size();
        int cols = accounts[0].size();

        int ans = INT_MIN;

        for(int i = 0 ; i < rows ; i++){

            int tempAns = 0;

            for(int j = 0 ; j < cols ; j++){
                tempAns += accounts[i][j];
            }

            ans = max(ans, tempAns);
        }

        return ans;
    }
};

int main(){
  
  return 0;
}