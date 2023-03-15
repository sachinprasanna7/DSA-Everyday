#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        
        unordered_map <char, int> mpp;

        for(int i = 0 ; i < s.size() ; i++){
            mpp[s[i]]++;

            if(mpp[s[i]] == 2) return s[i];
        }

        return 'z';
    }
};

int main(){
  
  return 0;
}