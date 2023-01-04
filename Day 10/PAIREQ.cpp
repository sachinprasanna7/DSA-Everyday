#include <iostream>
#include <unordered_map>
using namespace std;

int equalPairs(int arr[], int n){
  
    unordered_map <int,int> mpp;  
    for(int i = 0 ; i < n ; i++){
        mpp[arr[i]]++;
    }
    
    int maxOccuring = 0;
    
    for(auto i : mpp){
        if(i.second > maxOccuring){
            maxOccuring = i.second;
        }
    }
    
    return n - maxOccuring;
    
    
    
}

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int arr[N];
	    for(int i = 0 ; i < N ; i++){
	       cin>>arr[i];
	    }
	    cout<<equalPairs(arr,N)<<endl;
	}
	    
	
	return 0;
}
