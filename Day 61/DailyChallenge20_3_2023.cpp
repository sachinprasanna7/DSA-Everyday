#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int startIndex = INT_MAX;
        int endIndex = INT_MAX;

        int answer = 0;

        for(int i = 0 ; i < flowerbed.size() ; i++){
            if(flowerbed[i] == 1){
                startIndex = i;
                break;
            }
        }

        for(int i = flowerbed.size() - 1 ; i >= 0 ; i--){
            if(flowerbed[i] == 1){
                endIndex = i;
                break;
            }
        }

        if(startIndex != INT_MAX){  
            int gap = 0;
            for(int i = startIndex + 1 ; i <= endIndex ; i++){
                if(flowerbed[i] == 0) gap++;
                else{
                    answer += (gap - 1)/2;
                    gap = 0;
                }
            }

            answer += startIndex / 2;
            answer += (flowerbed.size() - 1 - endIndex)/2;
        }

        else{
            answer += (flowerbed.size() + 1) /2;
        }

        return (answer >= n);
 
    }
};

int main(){
  
  return 0;
}