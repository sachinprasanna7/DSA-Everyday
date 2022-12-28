#include <iostream>
using namespace std;


int Brute(int arr[], int n){

    int answer = INT_MIN;

    for(int i = 0 ; i < n ; i++){
    
    int sum = 0;
        for(int j = i ; j < n ; j++){
            sum += arr[j];
            if(sum > answer) answer = sum;
        }
    }

    return answer;
}




long long KadanesAlgo(int arr[], int n){
        
        long long answer = INT_MIN;
        long long trav = 0;
        
        for(int i = 0; i < n ; i++){
            trav += arr[i];
            
            if(answer < trav)
                answer = trav;
            
            if(trav < 0)
                trav = 0;
        }
        
        return answer;
        
    }

int main(){
  

  int arr[5] = {1,2,3,-2,5};

  cout<<Brute(arr,5);
  return 0;
}