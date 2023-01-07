#include <iostream>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {
	int T,N,K;
	cin>>T;
	while(T--){
	    cin>>N>>K;
	    int arr[N];
	    for(int i = 0 ; i < N ; i++) cin>>arr[i];
	    unordered_map <int,int> mpp;
	    int ans = 0;
	    for(int i = 0 ; i < N ; i++){
	        if(arr[i] == i+1){
	            mpp[i+1] = INT_MIN;
	        }
	        mpp[arr[i]]++;
	    }
	    
	    for(auto i : mpp){
	        if(i.second >= K) ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
