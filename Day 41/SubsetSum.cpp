#include <iostream>
#include <vector>
using namespace std;


//REECURSIVE - TLE

class Solution{ 
    private:
        
        bool solve(vector <int> &arr, int i, int startSum, int endSum){
            
            if(startSum == endSum) return true;

            if( i >= arr.size()) return false;

            bool ans1 = solve(arr, i+1, startSum + arr[i], endSum);
            bool ans2 = solve(arr, i+1, startSum, endSum);

            return ans1 || ans2;

        }
        
        
public:
    bool isSubsetSum(vector<int>arr, int sum){
        
        return solve(arr, 0, 0, sum);
    }
};

int main(){
  
  return 0;
}