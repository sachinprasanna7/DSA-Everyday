#include <iostream>
using namespace std;

int main() {
	int T,N,K;
	cin>>T;
	while(T--){
	    cin>>N>>K;
	    int arr[N];
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr[i];
	    }
	    
	    string ans = "";
	    
	    for(int i = 0 ; i < N ; i++){
	        if(arr[i] <= K){
	            ans += '1';
	            K -= arr[i];
	        }
	        else ans += '0';
	    }
	    
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}
