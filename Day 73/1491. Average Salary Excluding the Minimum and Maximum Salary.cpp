#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        
        int minIndex = 0, maxIndex = 0;
        double count = salary[0];

        for (int i = 1; i < salary.size() ; i++){
            if(salary[i] > salary[maxIndex])
                maxIndex = i;
            if(salary[i] < salary[minIndex])
                minIndex = i;
            count += salary[i];
        }

        return (count - salary[maxIndex] - salary[minIndex])/(salary.size() - 2);

    }
};

int main(){
  
  return 0;
}