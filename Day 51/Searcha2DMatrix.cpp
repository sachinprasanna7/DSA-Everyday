#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        vector <int> answer;

        for (const auto& row : matrix) {
            answer.insert(answer.end(), row.begin(), row.end());
        }

        int start = 0;
        int end = answer.size() - 1;

        int mid = start + (end - start)/2;

        while(start <= end){
            if(answer[mid] == target) return true;

            else if(answer[mid] < target) start = mid + 1;

            else end = mid - 1;

            mid = start + (end - start)/2;
        }

        return false; 
    }
};


//OPTIMISED

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        int start = 0;
        int end = rows*cols - 1;

        int mid = start + (end - start) / 2;

        while(start <= end){

            if(matrix[mid/cols][mid%cols] == target) return true;

            else if(matrix[mid/cols][mid%cols] < target) start = mid+1;

            else end = mid - 1;

            mid = start + (end - start) / 2;
        }

        return false;
        
    }
};

int main(){
  
  return 0;
}