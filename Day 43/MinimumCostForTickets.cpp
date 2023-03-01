#include <iostream>
#include <vector>

using namespace std;


//RECURSION - TLE

class Solution {
    private:
        
        int solve(vector <int> & days, vector <int> & costs, int i){
            
            if(i >= days.size()){
                return 0;
            }
                
            int cost1 = costs[0] + solve(days, costs, i+1);

            int j;

            for(j = i ; j < days.size() && days[j] < days[i] + 7 ; j++);

            int cost2 = costs[1] + solve(days, costs, j);

            for(j = i ; j < days.size() && days[j] < days[i] + 30 ; j++);

            int cost3 = costs[2] + solve(days, costs, j);
        
            return min(cost1, min(cost2,cost3));
        }

public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {

        return solve(days, costs, 0);
    }
};



int main(){
  
  return 0;
}