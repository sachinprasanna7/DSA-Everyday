#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

int findKthPositive(vector<int>& arr, int k) {
    int start = 0, end = arr.size();
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] - mid > k) end = mid;
        else start = mid + 1;
    }
    return start + k;
}
};



int main(){
  
  return 0;
}