#include <iostream>
#include <algorithm>
using namespace std;

int commonFactors(int a, int b) {
        int div = min(a,b);
        int ans = 0;
        for(int i = 1 ; i <= div / 2 ; i++){
            if(a%i==0 && b%i == 0) ans++;
        }
        if(max(a,b) % div == 0) ans++;
        return ans;
    }

int main(){
  
  return 0;
}