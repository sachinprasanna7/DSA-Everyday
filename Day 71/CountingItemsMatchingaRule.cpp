#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        int type;

        if(ruleKey == "type") type = 1;
        else if(ruleKey == "color") type = 2;
        else type = 3;

        int answer = 0;

        for(int i = 0 ; i < items.size() ; i++){
            if(type == 1 && items[i][0] == ruleValue) answer++;

            else if(type == 2 && items[i][1] == ruleValue) answer++;

            else if(type == 3 && items[i][2] == ruleValue) answer++;
        }

        return answer; 
    }
};

int main(){
  
  return 0;
}