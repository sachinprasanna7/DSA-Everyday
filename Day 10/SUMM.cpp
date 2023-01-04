#include <iostream>
using namespace std;

int main() {
	int T,A,B,C;
	cin>>T;
	while(T--){
	    cin>>A>>B>>C;
	    if(A+B == C){
	        cout<<"YES\n";
	    }
	    else cout<<"NO\n";
	}
	return 0;
}
