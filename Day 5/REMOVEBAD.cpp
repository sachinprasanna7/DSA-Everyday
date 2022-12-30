#include <iostream>
#include <unordered_map>
using namespace std;


int Solve(int arr[], int n){
    
    unordered_map <int,int> mpp;
    
    for(int i = 0 ; i < n ; i++){
        mpp[arr[i]]++;
    }
    
    int maxi = 0;
    int maxElement = arr[0];
    
    for(auto j : mpp){
        if(j.second > maxi){
            maxi = j.second;
            maxElement = j.first;
        }
    }
    
    int ans = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] != maxElement)  ans++;
    }
    
    return ans;
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
	    cout<<Solve(arr,N)<<endl;
	}
	
	
	return 0;
}
