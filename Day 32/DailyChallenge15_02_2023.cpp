#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        vector <int> ans;
        vector <int> numberArray;

        while(k != 0){
            int digit = k%10;
            numberArray.push_back(digit);
            k /= 10;
        }

        while(numberArray.size() < num.size()){
            numberArray.push_back(0);
        }

        reverse(numberArray.begin(), numberArray.end());

        while(num.size() < numberArray.size()){
            num.insert(num.begin(), 0);
        }

        int carry = 0;
        int sum;

        int i = numberArray.size() - 1;

        while(i >= 0){

            sum = num[i] + numberArray[i] + carry;
            if(sum >= 10){
                int tempSum = sum%10;
                ans.push_back(tempSum);
                carry = (sum/10)%10;
            }
            else{
                ans.push_back(sum);
                carry = 0;
            }
            i--;
        }

        if(carry > 0){
            ans.push_back(carry);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};


//OPTIMISED, BEAUTIFUL APPROACH

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        for(int i=num.size()-1;i>=0;i--){
            num[i] += k;
            k = num[i]/10;
            num[i] %= 10;
        }
        while(k > 0){
            num.insert(num.begin(), k%10);
            k /= 10;
        }
        return num;
    }
};



int main(){
  
  return 0;
}