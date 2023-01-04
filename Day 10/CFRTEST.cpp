#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i < n ; i++){
	        cin>>arr[i];
	    }
	    unordered_map <int,int> mpp;
	    int count = 0;
	    
	    for(int i = 0 ; i < n ; i++){
	        if(mpp.find(arr[i]) == mpp.end()){
	            mpp[arr[i]] = 1;
	            count++;
	        }
	    }
	    
	    cout<<min(count,n)<<endl;
	}
	return 0;
}
