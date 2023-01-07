#include <iostream>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    string arr[N];
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr[i];
	    }
	    
	    int ans = 0;
	    for(int i = 0 ; i < 10 ; i++){
	        int temp = 0;
	        for(int j = 0 ; j < N ; j++){
	            if(arr[j][i] == '1') temp++;
	        }
	        if(temp % 2 == 1) ans++;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
