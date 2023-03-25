#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    
        int ans = 0, prefixSum = 0;

        for(int i = 0 ; i < gain.size() ; i++){
            prefixSum += gain[i];
            ans = max(ans, prefixSum);
        }

        return ans;


    }
};

int main(){
  
  return 0;
}