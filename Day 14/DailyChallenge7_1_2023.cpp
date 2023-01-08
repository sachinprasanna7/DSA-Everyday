#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>

using namespace std;


class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {    //INITIAL BRUTE FORCE
        
        int maxPoints = 0;
        if(points.size() == 1) return 1;
        if(points.size() == 2) return 2;
        for(int i = 0 ; i < points.size() - 2 ; i++){
            for(int j = i+1 ; j < points.size() - 1 ; j++){
                int pts = 2;
                int x1 = points[i][0];
                int x2 = points[j][0];
                int y1 = points[i][1];
                int y2 = points[j][1];
                if(x2-x1 == 0){
                    int num = x1;
                }
                float slope = float((y2-y1))/(x2-x1);

                for(int k = j + 1 ; k < points.size(); k++){
                    int yf = points[k][1];
                    int xf = points[k][0];
                    if(x2-x1 == 0){
                        if(xf == x1) pts++;
                        else break;
                    }
                    else if(float((yf-y2)) / (xf - x2) == slope) pts++;
                    else break;
                }
                maxPoints = max(pts,maxPoints);
            }
        }

        return maxPoints;
    }
};

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {       //Solution with a map being used

        if (points.size() == 1) return 1;
        
        int ans = 2;
        for (int i = 0; i < points.size(); i++) {
            unordered_map <double, int> mpp;
            for (int j = 0; j < points.size(); j++) {
                if (j != i) {
                    double slope = atan2(points[j][1] - points[i][1], points[j][0] - points[i][0]);
                    mpp[slope]++;
                }
            }
            for (auto i : mpp) {
                ans = max(ans, i.second + 1);
            }
        }
        return ans;
    }
};


int main(){
  
  return 0;
}