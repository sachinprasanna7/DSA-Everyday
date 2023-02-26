#include <iostream>
using namespace std;

class Solution {
    private:

        int findDigits(int num){

            int sum = 0;
            while(num != 0){
                sum += num%10;
                num /= 10;
            }

            return sum;
        }
public:
    int addDigits(int num) {
        
        int ans = findDigits(num);

        while(!(ans <= 9)){
            ans = findDigits(ans);
        }

        return ans;
        

    }
    
};

int main(){
  
  return 0;
}