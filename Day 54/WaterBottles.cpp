#include <iostream>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int answer = numBottles;

        int emptyBottles = numBottles;

        while(emptyBottles > numExchange){

            int initialEmpty = emptyBottles;

            int temp = emptyBottles/numExchange;
            emptyBottles = 0;
            answer += temp;
            emptyBottles += (initialEmpty%numExchange);
            emptyBottles += temp;
        }

        if(emptyBottles == numExchange) return answer + 1;

        return answer;
    }
};

int main(){
  
  return 0;
}