#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map <char, char> dict;

        char ch = 'a';

        for(int i = 0 ; i < key.size() ; i++){
            if(ch == '{') break;
            if(key[i] == ' ') continue;
            if(dict.find(key[i]) == dict.end()){
                
                dict[key[i]] = ch;
                ch++;
            }
        }

        for(int i = 0 ; i < message.size() ; i++){
            if(message[i] == ' ') continue;

            message[i] = dict[message[i]];
        }

        return message;


    }
};

int main(){
  
  return 0;
}