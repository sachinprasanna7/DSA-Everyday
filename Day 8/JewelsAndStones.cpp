#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map <char,int> mpp;
        int ans = 0;

        for(int i = 0 ; i < jewels.size() ; i++){
            mpp[jewels[i]]++;
        }

        for(int i = 0 ; i < stones.size() ; i++){
            if(mpp[stones[i]] == 1){
                ans++;
            }
        }

        return ans;
            
    }
};

int main(){
  
  return 0;
}