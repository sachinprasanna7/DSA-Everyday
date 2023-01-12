#include <iostream>
#
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y;
	    int num = min(X,Y);
	    int ans;
	    
	    for(int i = num ; i <= 1000000000000000000 ; i++){
	        if(((i+X)%Y==0) && ((i+Y)%X==0)){
	            ans = i;
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
