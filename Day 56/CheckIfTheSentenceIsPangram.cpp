#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
  
  return 0;
}

class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_map <char, int> mpp;

        for(int i = 0 ; i < sentence.size() ; i++){
            mpp[sentence[i]] = true;
        }

        return mpp.size() == 26;

    }
};