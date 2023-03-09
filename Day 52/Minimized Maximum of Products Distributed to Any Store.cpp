#include <iostream>
#include <vector>
using namespace std;

class Solution {
    private:

        bool isPossible(vector <int> & quantities, int n, long long ans){
            
            long long ctr = 0;

            for(int i = 0 ; i < quantities.size() ; i++){

                if(quantities[i] % ans == 0) ctr += quantities[i]/ans;
                else ctr += quantities[i]/ans + 1;
            }

            if(ctr <= n) return true;

            return false;

        }

public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        
        int start = 1;
        int end = INT_MAX;

        int mid = start + (end - start)/2;

        int answer = end;

        while(start <= end){

            if(isPossible(quantities, n, mid)){
                answer = mid;
                end = mid - 1;
            }

            else {
                start = mid + 1;
            }

            mid = start + (end - start) /2;
        }

        return answer;
    }
};

int main(){
  
  return 0;
}