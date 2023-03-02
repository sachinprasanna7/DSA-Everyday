#include <iostream>
#include <vector>

using namespace std;

//INITIAL SOLUTION - DOESNT WORK

class Solution {
    private:
        void addNo(int num, vector <char> &chars){

            while(num != 0){
                int digit = num%10;
                char ch = static_cast<char>(digit + '0');
                chars.push_back(ch);
                num/=10;
            }
        }

public:
    int compress(vector<char>& chars) {
        
        int start = 0;
        int end = 1;

        int n = chars.size();

        while(end < n){

            if(chars[end] != chars[end - 1]){
                int num = end - start;
                chars.push_back(chars[start]);

                if(num != 1){
                    addNo(num, chars);
                }
                start = end;
                end++;
            }
            else end++;
        }
        int num = end - start;
        chars.push_back(chars[start]);

        if(num != 1) addNo(num, chars);

        start = end;
        end++;

        
        for(int i = 0 ; i < chars.size() ; i++){
            chars.erase(chars.begin());
        }

        return end;
    }
};

//FINAL SOLUTION

class Solution {
public:
    int compress(vector<char> &chars)
    {
        int n = chars.size();
        int i = 0, k =0; 

        while( i < n ){
            int j = i;
            while(j < n && chars[j] == chars[i]) j++;

            chars[k++] = chars[i];

            if(j-i > 1){
                string s = to_string(j - i);
                for(int p = 0 ; p < s.size() ; p++){
                    chars[k++] = s[p];
                }
            }
            i = j;
        }
        return k;
    }
};



int main(){
  
  return 0;
}