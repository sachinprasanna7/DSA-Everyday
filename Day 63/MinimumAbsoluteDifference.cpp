#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        vector <vector <int>> answer;

        sort(arr.begin(), arr.end());

        int minimumDifference = arr[1] - arr[0];

        for(int i = 2 ; i < arr.size() ; i++){
            minimumDifference = min(minimumDifference, arr[i] - arr[i-1]);
        }

        for(int i = 1; i < arr.size() ; i++){
            if(arr[i] - arr[i-1] == minimumDifference){
                vector <int> temp;
                temp.push_back(arr[i-1]);
                temp.push_back(arr[i]);
                answer.push_back(temp);
            }
        }

        return answer;
    }
};

int main(){
  
  return 0;
}