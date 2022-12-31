#include <iostream>
using namespace std;

int xorOperation(int n, int start) {

        int* nums = new int [n];
        nums[0] = start;
        int ans = nums[0];
        for(int i = 1 ; i < n ; i++){
            nums[i] = start + 2 * i;
            ans = ans ^ nums[i];
        }

        return ans;
    }

int main(){
  
  return 0;
}


