#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        unordered_map <int,char> mpp;

        for(int i = 0 ; i < indices.size() ; i++){
            mpp[indices[i]] = s[i];
        }

        string ans = "";

        for(int i = 0 ; i < indices.size() ; i++){
            ans += mpp[i];
        }

        return ans;
    }
};

class SolutionOptimal {               //Optimsed
public:
    string restoreString(string s, vector<int>& indices) {
        string str = s;
        for(int i=0;i<indices.size();i++)
            str[indices[i]]=s[i];
        return str;
    }
};

int main(){
  
  return 0;
}