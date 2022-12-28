#include <iostream>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y;
	    if(10*Y < X) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
