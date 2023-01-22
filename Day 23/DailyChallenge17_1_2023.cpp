#include <iostream>
using namespace std;

class Solution {
public:
    int minFlipsMonoIncr(string s) {

        int zerocount = 0;
         
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '0') zerocount++;
        }

        int ans = zerocount;
        int onecount = 0;

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '0'){
                zerocount--;
                ans = min(ans, zerocount + onecount);
            }
            else{
                onecount++;
                ans = min(ans, zerocount + onecount);
            }
        }
        return ans;
    }
};

int main(){
  
  return 0;
}