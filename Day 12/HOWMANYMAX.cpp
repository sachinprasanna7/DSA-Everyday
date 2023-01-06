#include <iostream>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    string str;
	    cin>>str;
	    
	    int ans = 1;
	    
	    for(int i = 0; i < N-1; i++){
	        if(str[i] == '1' && str[i+1] == '0') ans++;
	    }
	    
	    cout<<ans<<endl;
	}
	    
	
	return 0;
}
