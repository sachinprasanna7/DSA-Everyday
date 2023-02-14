#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        
        string ans = "";
        char sum;
        char carry = '0';

        if(b.size() > a.size()) swap(a,b);
        while(b.size() < a.size()) b = "0" + b;
        
        int i = a.size() - 1;
        while (i >= 0){
            if((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')){
                if(carry == '0'){
                    sum = '1';
                    carry = '0';
                }
                else{
                    sum = '0';
                    carry = '1';
                }
                
            }
            else if(a[i] == '1' && b[i] == '1'){
                if(carry == '0'){
                    sum = '0';
                    carry = '1';
                }
                else{
                    sum = '1';
                    carry = '1';
                }
            }
            else{
                if(carry == '0'){
                    sum = '0';
                    carry = '0';
                }
                else{
                    sum = '1';
                    carry = '0';
                }
            }
            ans = ans + sum;
            i--;
        }
        if(carry != '0')
            ans = ans + carry;
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
  
  return 0;
}