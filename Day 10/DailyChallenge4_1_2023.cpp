#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {    //Didnt Work, but sorting approach
public:
    int minimumRounds(vector<int>& tasks) {
        
        sort(tasks.begin(), tasks.end());
        unordered_map <int,int> mpp;

        int answer = 0;
        int count = 1;

        for(int i = 1 ; i < tasks.size() ; i++){
            if(tasks[i] != tasks[i-1]){
                if(count == 1) return -1;
                if(count % 3 == 0)  answer += count/3;
                else if(count % 3 == 2)  answer += (count+1)/3;
                else answer += (count+2)/3;
                count = 1;
            }
            else count++;
        }

        return answer;
    }
};

class SolutionOptimised {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map <int,int> mpp;

        int answer = 0;

        for(int i = 0 ; i < tasks.size() ; i++){
            mpp[tasks[i]]++;
        }

        for(auto j : mpp){
            if(j.second == 1) return -1;
            else if(j.second % 3 == 0)  answer += j.second/3;
            else if(j.second % 3 == 2)  answer += (j.second+1)/3;
            else answer += (j.second+2)/3;
        }

        return answer;
    }
};

int main(){
  
  return 0;
}