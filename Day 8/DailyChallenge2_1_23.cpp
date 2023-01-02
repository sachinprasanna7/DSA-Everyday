#include <iostream>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {

        bool first = (word[0] >= 'A' && word[0] <= 'Z') ? true : false;

        if(first){
            bool second = (word[1] >= 'A' && word[1] <= 'Z') ? true : false;
            if(second){
                for(int i = 2 ; i < word.size() ; i++){
                    if(!(word[i] >= 'A' && word[i] <= 'Z')) return false;
                }
                return true;
            }
            else{
                for(int i = 2 ; i < word.size() ; i++){
                    if(word[i] >= 'A' && word[i] <= 'Z') return false;
                }
                return true;
            }
        }
        else{
            for(int i = 1 ; i < word.size() ; i++){
                if(word[i] >= 'A' && word[i] <= 'Z'){
                    return false;
                }
            }
            return true;
        }
    }
};

int main(){
  
  return 0;
}