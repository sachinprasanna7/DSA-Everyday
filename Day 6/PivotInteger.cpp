#include <iostream>
using namespace std;

int pivotInteger(int n) {
        
        int sum = (n*(n+1))/2;
        int ans = 0;
        if(n == 1) return 1;
        for(int i = 1 ; i < n ; i++){
            ans += i;
            int remainingSum = sum - (i*(i-1))/2;
            if(ans == remainingSum) return i;
        }

        return -1;
    }

int main(){
  
  return 0;
}