#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        int totalDistance = accumulate(distance.begin(), distance.end(), 0);

        int clockwiseDistance = 0;

        for(int i = min(start, destination) ; i < max(start, destination) ; i++){
            clockwiseDistance += distance[i];
        }

        return min(clockwiseDistance, totalDistance - clockwiseDistance);
    }
};

int main(){
  
  return 0;
}