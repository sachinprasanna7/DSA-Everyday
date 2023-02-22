#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if(x == 0) return true;
        
        int num = abs(x);
        string number = to_string(num);
        string ans = "";

        while (x!=0){
            char digit = x%10 + '0';
            ans += digit;
            x = x/10;
        }

        if (number == ans) return true;
        return false;
    }
};

int main(){
  
  return 0;
}