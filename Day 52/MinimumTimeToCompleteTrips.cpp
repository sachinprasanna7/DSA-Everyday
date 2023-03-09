#include <iostream>
#include <vector>

using namespace std;

class Solution {

    private:

        bool isPossible(vector <int> & time, int totalTrips, long long ans){
            
            long long ctr = 0;
            for(int i = 0 ; i < time.size() ; i++){
                ctr += ans/time[i];
            }

            if(ctr >= totalTrips) return true;

            return false;
        }


public:
    long long minimumTime(vector<int>& time, int totalTrips) {

        long long start = 1;
        long long end = 1e14;

        long long mid = start + (end - start)/2;

        long long ans = end;

        while(start <= end){
            
            if(isPossible(time, totalTrips, mid)){
                ans = mid;
                end = mid - 1;
            }

            else{
                start = mid + 1;
            }

            mid = start + (end - start)/2;
        }

        return ans;

    }
};

int main(){
  
  return 0;
}