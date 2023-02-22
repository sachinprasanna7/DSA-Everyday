#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

//CLASSICAL BINARY SEARCH

class Solution {
    private:
        bool checkPossible(vector <int> &weights, int days, int ans){
            
            int temp = 0;
            int count = 1;

            for(int i = 0 ; i < weights.size() ; i++){
                temp += weights[i];
                if(temp > ans){
                    temp = weights[i];
                    count++;
                }
            }

            if(count <= days) return true;
            return false;
        }
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);

        int mid = (start + end)/2;

        int answer = end;

        while(start < end){
            if(checkPossible(weights, days, mid)){
                answer = mid;
                end = mid;
            }
            else{
                start = mid + 1;
            }

            mid = (start + end)/2;
        }

        return answer;
    }
};

int main(){
  
  return 0;
}