#include <iostream>
#include <algorithm>
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
	    
	    if(N == 1) cout<<arr[0]<<endl;
	    else{
	        sort(arr, arr + N);
	        int modulo = arr[0] % arr[1];
	        for(int i = 2 ; i < N ; i++){
	            modulo %= arr[i];
	        }
	        cout<<modulo<<endl;
	    }
	}
	
	return 0;
}
