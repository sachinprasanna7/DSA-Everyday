#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        vector<vector<int>> ans;
        int i = 0, n = intervals.size();
        while(i < n && intervals[i][1] < newInterval[0]) 
            ans.push_back(intervals[i++]);
        
        vector<int> merger = newInterval;
        while(i < n && intervals[i][0] <= newInterval[1]){
            merger[0] = min(merger[0], intervals[i][0]);
            merger[1] = max(merger[1], intervals[i++][1]);
        }
        ans.push_back(merger);
        
        while(i < n) ans.push_back(intervals[i++]);
        
        return ans;
        
    }
};

int main(){
  
  return 0;
}