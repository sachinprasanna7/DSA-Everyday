#include <iostream>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int ans = 0;
        for(int i = 0 ; i < 32 ; i++){
            int bit1 = start%2;
            int bit2 = goal%2;
            if(bit1 ^ bit2 == 1){
                ans++;
            } 
            start = start >> 1;
            goal = goal >> 1;
        }
        return ans;
    }
};

int main(){
  
  return 0;
}