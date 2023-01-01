#include <iostream>
#include <vector>
using namespace std;


int sumOddLengthSubarrays(vector<int>& arr) {
        
        int answer = 0;

        for(int i = 0; i < arr.size(); i++){
            for(int j = i; j < arr.size(); j++){
                if((j-i) % 2 == 0){
                    int curr_sum = 0;
                    for(int k = i; k < j + 1 ; k++){
                        curr_sum += arr[k];
                    }
                    answer += curr_sum;
                }
            }
        }

        return answer;
        
}

int Optimised(vector<int>& arr) {
        
        int answer = 0;

        for (int i = 0; i < arr.size(); ++i) {
            int left = i, right = arr.size() - i - 1;
            answer += arr[i] * (left / 2 + 1) * (right / 2 + 1);
            answer += arr[i] * ((left + 1) / 2) * ((right + 1) / 2);
        }
        
        return answer;
        
    }

int main(){
  
  return 0;
}