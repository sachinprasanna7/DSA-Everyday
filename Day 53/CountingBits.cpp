#include <iostream>
#include <vector>
using namespace std;

class Solution {
    

public:
    vector<int> countBits(int n) {
        
        vector <int> ans;

        for(int i = 0 ; i < n + 1 ; i++){
            ans.push_back(__builtin_popcount(i));
        }

        return ans;
    }
};

int main(){
  
  return 0;
}
