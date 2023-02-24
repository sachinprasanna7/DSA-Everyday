#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        
        for(int i = 0 ; i < 20 ; i++){
            if(n < pow(3,i)) return false;
            if(n == pow(3,i)) return true;
        }

        return false;
    }
};

class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n == 1) return true;
        if(n <= 2) return false;
        while(n >= 2){
            if(n % 3 != 0) return false;
            n = n/3;
        }
        return true;
    }
};

int main(){
  
  return 0;
}