#include <iostream>
#include <algorithm>
using namespace std;

int *findTwoElement(int *arr, int n) {
        
        int* ans = new int[2];
        sort(arr, arr+n);
        for(int i = 0; i < n; i++){
            if(arr[i] != i+1){
                ans[1] = i+1;
                break;
            }
                
        }
        
        for(int i = 0 ; i < n-1 ; i++){
            if(arr[i] == arr[i+1]){
                ans[0] = arr[i];
                break;
            }
        }
        
        return ans;
        
    }


int main(){
  cout<<"hello world";
  return 0;
}