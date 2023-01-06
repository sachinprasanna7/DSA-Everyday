#include <iostream>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int arr[N];
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr[i];
	    }
	    
	    int ans = 0;
	    int doub[N] = {0};
	    for(int i = 0 ; i < N - 1; i++){
	        if(arr[i] != arr[i+1] && doub[i] == 0){
	            doub[i+1] = 1;
	            ans += 2;
	        }
	        else if(arr[i] != arr[i+1] && doub[i] == 1){
	            doub[i+1] = 1;
	            ans +=1;
	        }
	    }
	    
	    cout<<ans<<endl;
	}
	
	return 0;
}
