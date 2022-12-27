#include <iostream>
#include <cmath>
using namespace std;

int countSquares(int N) {
        
        int count = 0;
        float i = 1;
        while(i<N){
            if(i < N/i){
                count++;
                i++;
            }
            else
                break;
        }
        
        return count;
    }

int countSquares(int N) {
        
        int ans = sqrt(N-1);
        
        return ans;
    }

int main(){
  
  return 0;
}