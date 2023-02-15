#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector <int> expected;
        expected = heights;

        int ans = 0;

        sort(expected.begin(), expected.end());

        for(int i = 0 ; i < expected.size() ; i++){
            if(expected[i] != heights[i]) ans++;
        }

        return ans;
    }
};

int main(){
  
  return 0;
}