#include <iostream>
#include <vector> 
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        unordered_map <string, bool> mpp;

        for(int i = 0 ; i < paths.size() ; i++){
            mpp[paths[i][0]] = true;
        }

        for(int i = 0 ; i < paths.size() ; i++){
            if(mpp.find(paths[i][1]) == mpp.end()) return paths[i][1];
        }

        return " ";
    }
};

int main(){
  
  return 0;
}