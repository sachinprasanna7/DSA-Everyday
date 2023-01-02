#include <iostream>
using namespace std;

int main() {
	int T,N,n1,n2,n3;
	cin>>T;
	while(T--){
	    cin>>N;
	    n1 = N;
	    n2 = 1;
	    n3 = 2*n1-n2;
	    cout<<n2<<" "<<min(n1,n3)<<" "<<max(n1,n3)<<endl;
	}
	return 0;
}
