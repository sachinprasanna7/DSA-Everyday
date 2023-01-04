#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include<strings.h>

using namespace std;

class SolutionWRONG{
    
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map <char,string> mpp;
        vector<string> temp;

        string w = "";
        for (auto x : s){
            if (x == ' '){
                temp.push_back(w);
                w = "";
            }
            else w = w + x; 
        }
        temp.push_back(w);

        for(int i = 0; i < pattern.size() ; i++){
            if(mpp.find(pattern[i]) == mpp.end()){
                mpp[pattern[i]] = temp[i];
            }
            else{
                string current = mpp[pattern[i]];
                if(temp[i].compare(current) != 0){
                    return false;
                }
            }   
        }
        return true;
    }
};

// class Solution {
    
// public:
//     bool wordPattern(string pattern, string s) {
        
//         unordered_map<char,string>mpp;
//         unordered_map<string,bool>visited;
//         vector<string>temp;
//         stringstream st(s);

//         string word;
//         int count = 0;

//         while(st>>word){
//             count++;
//             temp.push_back(word);
//         }
//        if(pattern.size() != count){
//             return false;
//         }else{
//             for(int i=0;i<pattern.size();i++){
//                  char c=pattern[i];
//                  if(mpp[c] == "" && visited[temp[i]] == true ){
//                      return false;
//                  }
//                 else if(mpp[c] == ""){
//                     mpp[c] = temp[i];
//                      visited[temp[i]] =true;
//                  }
//                  else{
//                      if(mpp[c] != temp[i]) return false;
//                  }
//             }
//         }

//         return true;
//     }
// };



int main(){
  
  return 0;
}