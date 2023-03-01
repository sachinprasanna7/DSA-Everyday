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

//RECURSTION + MEMORISATION

class Solution {
    private:
        
        int solve(vector <int> & days, vector <int> & costs, int i, vector <int> & dp){
            
            if(i >= days.size()){
                return 0;
            }

            if(dp[i] != -1) return dp[i];
                
            int cost1 = costs[0] + solve(days, costs, i+1, dp);

            int j;

            for(j = i ; j < days.size() && days[j] < days[i] + 7 ; j++);

            int cost2 = costs[1] + solve(days, costs, j, dp);

            for(j = i ; j < days.size() && days[j] < days[i] + 30 ; j++);

            int cost3 = costs[2] + solve(days, costs, j, dp);
        
            dp[i] =  min(cost1, min(cost2,cost3));

            return dp[i];
        }

public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {

        vector <int> dp(days.size() + 1, -1);

        return solve(days, costs, 0, dp);
    }
};


//TABULATION

class Solution {
    private:

        int solveTab(vector <int> & days, vector <int> & costs){
            
            vector <int> dp(days.size() + 1, INT_MAX);

            dp[days.size()] = 0;

            for(int i = days.size() - 1 ; i >= 0 ; i--){
                
                int cost1 = costs[0] + dp[i+1];
                int j;
                for(j = i ; j < days.size() && days[j] < days[i] + 7 ; j++);
                    int cost2 = costs[1] + dp[j];

                for(j = i ; j < days.size() && days[j] < days[i] + 30 ; j++);
                    int cost3 = costs[2] + dp[j];

                dp[i] =  min(cost1, min(cost2,cost3));
            }

            return dp[0];

        }

public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {

        return solveTab(days, costs);
    }
};



int main(){
  
  return 0;
}