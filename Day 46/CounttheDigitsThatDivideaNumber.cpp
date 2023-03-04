#include <iostream>
using namespace std;

class Solution {
public:
    int countDigits(int num) {

        int ans = 0;

        int storer = num;

        while(num != 0){
            int digit = num % 10;
            if(storer % digit == 0) ans++;
            num /= 10;
        }

        return ans;
        
    }
};

int main(){
  
  return 0;
}