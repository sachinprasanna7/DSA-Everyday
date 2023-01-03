#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> cellsInRange(string s) {
        
        vector <string> ans;
        char col1 = s[0];
        char col2 = s[3];
        char row1 = s[1];
        char row2 = s[4];

        for(char i = col1 ; i <= col2 ; i++){
            for(char j = row1 ; j <= row2 ; j++){
                string temp = "";
                temp += i;
                temp += j;
                ans.push_back(temp);
            }
        }

        return ans;
    }
};

int main(){
  
  return 0;
}