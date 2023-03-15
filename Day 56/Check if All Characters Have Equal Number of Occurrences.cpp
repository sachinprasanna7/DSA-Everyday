#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
  
  return 0;
}

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        unordered_map <int, int> mpp;

        for(int i = 0 ; i < s.size() ; i++){
            mpp[s[i]]++;
        }

        int size = mpp[s[0]];

        for(auto i : mpp){
            if(i.second != size) return false;
        }

        return true;
    }
};