#include <iostream>
#include <vector>

using namespace std;

class Solution {    //NOT WORKING, BUT TRIED
    private:
        int oneVisit(pair <int,int> start, pair <int,int> end){
            
            int time = 0;

            int mini1 = abs(end.first - start.first); 
            int mini2 = abs(end.second - start.second);

            if(mini1 <= mini2){
                time += mini1;
                time += abs(end.second - end.first);
            }
            else{
                time += mini2;
                time += abs(end.first - end.second);
            }

            return time;
        }
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int minTime = 0;

        for(int i = 0 ; i < points.size()-1 ; i++){
            pair <int,int> start;
            pair <int,int> end;
            start = make_pair(points[i][0],points[i][1]);
            end = make_pair(points[i+1][0],points[i+1][1]);
            minTime += oneVisit(start, end);
        }

        return minTime;
    }
};

class Solution_1 {
    
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {    //Optimised Solution
        
        int minTime = 0;

        for(int i = 0 ; i < points.size()-1 ; i++){
            int x = abs(points[i][0] - points[i+1][0]);
            int y  = abs(points[i][1] - points[i+1][1]);
            minTime += max(x,y);
        }

        return minTime;
    }
};

int main(){
  
  return 0;
}