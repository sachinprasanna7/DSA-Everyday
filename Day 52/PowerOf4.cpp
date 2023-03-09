#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i = 0;i<=15;i++){
            if (n==pow(4,i)){
                return true;
            }
        }
        return false;
    }
};

int main(){
  
  return 0;
}