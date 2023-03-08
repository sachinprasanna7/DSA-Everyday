#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        bool ctr = true;
        
        for(int i = 0 ; i < arr.size() - 1 ; i++){
            
            if(arr[i] < arr[i+1] && ctr == true){
                swap(arr[i], arr[i+1]);
            }
            
            else if(arr[i] > arr[i+1] && ctr == false){
                swap(arr[i], arr[i+1]);
            }
            
            ctr = !ctr;
        }
        
    }
};


int main(){
  
  return 0;
}