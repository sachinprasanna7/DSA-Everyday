#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int rows = mat.size();

        int answer = 0;

        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < rows ; j++){
                if(i == j || i + j == rows - 1) answer += mat[i][j];
            }
        }


        return answer;


    }
};

int main(){
  
  return 0;
}