#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {           //FAiLED CODE
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 0;
        sort(points.begin() , points.end());
        int curr_index = 0;

        for(int i = 0 ; i < points.size(); i++){
            if(points[curr_index][1] < points[i][0]){
                ans++;
                curr_index = i;
            }
        }

    //      for (int i = 0; i < points.size(); i++) {
    //     for (int j = 0; j < points[i].size(); j++)
    //         cout << points[i][j] << " ";
    //     cout << endl;
    // }
 
        return ans + 1;
    }
};





class Solution {           //SOLUTION
public:
    int findMinArrowShots(vector<vector<int>>& points) {
               
        int ans = 1;
        sort(points.begin() , points.end());
        int curr_index = INT_MAX;

        for(auto x : points){
            int x_coordinate = x[0];
            int y_coordinate = x[1];

            if(curr_index < x_coordinate){
                ans++;
                curr_index = y_coordinate;
            }
            else curr_index = min(curr_index, y_coordinate);
        }
 
        return ans;
    }
};

int main(){
  
  return 0;
}