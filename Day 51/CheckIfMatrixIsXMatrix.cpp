#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        

        int rows = grid.size();

        int answer = 0;

        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < rows ; j++){
                if(i == j || i + j == rows - 1){
                    if(grid[i][j] == 0)
                        return false;
                }

                else if(grid[i][j] != 0) return false;

            }
        }

        return true;
    }
};

int main(){
  
  return 0;
}