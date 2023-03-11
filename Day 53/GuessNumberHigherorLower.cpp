#include <iostream>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
int guess(int num){}
 */

int guess(int num){ return 0;}

class Solution {
public:
    int guessNumber(int n) {
        
        int start = 1;
        int end = n;

        int mid = start + (end - start) / 2;

        while(start <= end){
            if(guess(mid) == 0) return mid;

            else if(guess(mid) == -1) end = mid - 1;

            else start = mid + 1;

            mid = start + (end - start) / 2;
        }

        return mid;
    }
};

int main(){
  
  return 0;
}