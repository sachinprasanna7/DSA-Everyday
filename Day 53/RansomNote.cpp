#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map <char, int> mpp;

        for(int i = 0 ; i < magazine.size() ; i++){
            mpp[magazine[i]]++;
        }

        cout<<mpp['a'];

        for(int i = 0 ; i < ransomNote.size() ; i++){
            if(mpp[ransomNote[i]] == 0) return false;
            mpp[ransomNote[i]]--;
        }

        return true;
    }
};

int main(){
  
  return 0;
}