#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        unordered_map <char, bool> mpp;
        for(int i = 0 ; i < allowed.size() ; i++){
            mpp[allowed[i]] = true;
        }

        int count = words.size();
        for(int i = 0 ; i < words.size() ; i++){
            string temp = words[i];
            int tempsize = 0;
            for(int j = 0 ; j < temp.size() ; j++){
                if(!mpp[temp[j]] ){
                    count--;
                    break;
                } 
            }
        }

        return count;
    }
};

int main(){
  
  return 0;
}