#include <iostream>
#include <vector>
using namespace std;

class Solution {                 //Something was wrong here
    private:
        bool checkSorted(string str){
            
            int curr_no = str[0] - 'a';
            for(int i = 1 ; i < str.size() ; i++){
                int num = str[i] - 'a';
                if(num >= curr_no){
                    curr_no = num;
                }
                else return false;
            }
            return true;
        }
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;

        for(int i = 0 ; i < strs[0].size() ; i++){
            string temp = "";
            for(int j = 0 ; j < strs.size() ; j++){
                temp += strs[j][i];
            }
            if(checkSorted(temp)) ans++;
        }

        return strs.size() - ans;
    }
};


class SOLUTION {
    
public:
    int minDeletionSize(vector<string>& strs) {
        int answer = 0;

        for(int i = 0 ; i < strs[0].size() ; i++){
            for(int j = 1 ; j < strs.size() ; j++){
                if (strs[j][i] < strs[j - 1][i]) {
                    answer++;
                    break;
                }
            }
            
        }

        return answer;
    }
};



int main(){
  
  return 0;
}