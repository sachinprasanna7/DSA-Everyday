#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        
        int answer = 0;

        sort(satisfaction.begin(), satisfaction.end());

        for(int i = 0; i < satisfaction.size(); i++){

            int temp_answer = 0;
            int count = 1;

            for(int j = i; j < satisfaction.size() ; j++){
                
                temp_answer += satisfaction[j] * (count++);
            }

            if (temp_answer > answer)
                answer = temp_answer;
        }

        return answer;
    }
};

int main(){
  
  return 0;
}