#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        });

        int answer = 0;

        for(int i = 0 ; i < boxTypes.size() ; i++){

            int possible = min(truckSize, boxTypes[i][0]);

            answer += possible*boxTypes[i][1];

            truckSize -= possible;

            if(truckSize == 0) break;
        }

        return answer;




    }
};

int main(){
  
  return 0;
}