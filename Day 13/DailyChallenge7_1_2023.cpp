#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {        //FIRST SOLUTION, TLE

        int n = cost.size();

        for(int i = 0; i < n ; i++){
            int tank = 0;
            for(int j = i ; j < n + i ; j++){
                tank += gas[j%n];
                tank -= cost[j%n];
                if(tank < 0) break;
            }
            if(tank >= 0) return i;
        }
        return -1;
}

int canCompleteCircuit1(vector<int>& gas, vector<int>& cost) {           //Solution 2, with a map -> WRONG ANSWER

        int n = cost.size();

        int maxDiff = 0;

        for(int i = 0 ; i < n ; i++){
            if(gas[i] - cost[i] > maxDiff) maxDiff = gas[i] - cost[i];
        }
        unordered_map <int,int> mpp;
        for(int i = 0 ; i < n ; i++){
            if(gas[i] - cost[i] == maxDiff) mpp[i] = 1;
        }

        for(auto i : mpp){
            int tank = 0;
            for(int j = i.first ; j < n + i.first ; j++){
                tank += gas[j%n];
                tank -= cost[j%n];
                if(tank < 0) break;
            }
            if(tank >= 0) return i.first;
        }
        return -1;
}


int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {          //FINAL SOLUTION - GREEDY APPROACH

        int n = cost.size();
        int totalCost = 0, totalGas = 0, index = 0, fuel = 0;
        for(int i=0;i<n;i++){
            totalCost += cost[i];
            totalGas += gas[i];
            if(fuel < 0){
                fuel = 0;
                index = i;
            }
            fuel += (gas[i]-cost[i]);
        }
        if(totalCost > totalGas) return -1;
        else return index;

    }         

int main(){
  
  return 0;
}