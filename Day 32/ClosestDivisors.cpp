#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


//INITIAL 

class Solution {
public:
    vector<int> closestDivisors(int num) {
        
        int num1 = num + 1;
        int num2 = num + 2;

        int candidate1 = sqrt(num1);
        int candidate2 = sqrt(num2);
        int candidate3 = num1;
        int candidate4 = num2;

        while(true){
            if(num1 % candidate1 == 0){
                candidate3 = num1 / candidate1;
                break;
            }
            candidate1--;
        }

        while(true){
            if(num2 % candidate2 == 0){
                candidate4 = num2 / candidate2;
                break;
            }
            candidate2--;
        }

        vector <int> ans;

        if(abs(candidate4 - candidate2) < abs(candidate3 - candidate1)){
            ans.push_back(candidate2);
            ans.push_back(candidate4);
        }
        else{
            ans.push_back(candidate1);
            ans.push_back(candidate3);
        }

        return ans;
    }
};



//LITTLE LESS REPITIION OF CODE

class Solution {
    private:
        int finder(int num, int candidate){
            while(true){
                if(num % candidate == 0){
                    return (num / candidate);
                }
                candidate--;
            }
        }

public:
    vector<int> closestDivisors(int num) {

        int candidate1 = sqrt(num + 1);
        int candidate2 = sqrt(num + 2);
        int candidate3 = finder(num + 1, candidate1);
        int candidate4 = finder(num + 2, candidate2);

        candidate1 = (num + 1) / candidate3;
        candidate2 = (num + 2) / candidate4;

        vector <int> ans;

        if(abs(candidate4 - candidate2) < abs(candidate3 - candidate1)){
            ans.push_back(candidate2); ans.push_back(candidate4);
        }
        else{
            ans.push_back(candidate1); ans.push_back(candidate3);
        }

        return ans;
    }
};

int main(){
  
  return 0;
}