#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    private:

        bool isPossible(vector <int> & piles, int h, int j){

            long long int start = 0;
            
            for(int i = 0; i < piles.size() ; i++){
                
                int num = piles[i];
                if(num % j == 0) start += num/j;
                else start += num/j + 1;
                
            }

            if(start > h) return false;

            return true;
        }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int maxi = piles[0];

        for(int i = 1 ; i < piles.size() ; i++) maxi = max(piles[i], maxi);
        

        int start = 1;
        int end = maxi;
        
        int mid = start + (end - start)/2;

        while(start <= end){

            if(isPossible(piles, h, mid)){
                maxi = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }

            mid = start + (end - start)/2;
        }

        return maxi;

    }
};

int main(){
  
  return 0;
}