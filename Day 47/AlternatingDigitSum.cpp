#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


class Solution {
public:
    int alternateDigitSum(int n) {
        
        vector <int> ans;

        while(n!=0){
            ans.push_back(n%10);
            n /= 10;
        }

        int answer = 0, count = 0;

        for(int i = ans.size() - 1 ; i >= 0 ; i--){
            
            answer += pow(-1, count++)*ans[i];
        }

        return answer;
    }
};

int main(){
  
  return 0;
}