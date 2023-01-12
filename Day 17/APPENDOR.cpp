#include <iostream>
using namespace std;

int Solve(int ans, int Y){
    
    for(int i = 0 ; i <= Y; i++){
	   if(Y == (ans | i)){
	       //cout<<"or is "<<(ans | i)<<endl;
	       //cout<<"ans is now"<<ans<<endl;
	       //cout<<"y is now"<<Y<<endl;
	       //cout<<"i is now "<<i<<endl;
	       return i;
	   }
	}
	
	return -1;
}

int main() {
	int T,N,Y;
	cin>>T;
	while(T--){
	    cin>>N>>Y;
	    int arr[N];
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr[i];
	    }
	    
	    int ans = arr[0];
	    for(int i = 1 ; i < N ; i++){
	        ans = ans | arr[i];
	    }
	    //cout<<"ANS IS "<<ans;
	    
	    cout<<Solve(ans,Y)<<endl;
	    
	}
	    
	
	return 0;
}
