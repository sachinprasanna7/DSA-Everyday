#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  
  return 0;
}


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector <int> ans;
        int carry = 0;

        int i = digits.size() - 1;
        int sum = digits[i] + carry + 1;
        while(i >= 0){
            if(sum >= 10){
                ans.push_back(0);
                carry = 1;
            }
            else{
                ans.push_back(sum);
                carry = 0;
            }
            if(i-1 >= 0)
                sum = digits[--i] + carry;
            else break;
        }
        if(carry != 0) ans.push_back(carry);
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};