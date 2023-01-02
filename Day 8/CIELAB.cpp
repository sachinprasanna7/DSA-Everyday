#include <iostream>
using namespace std;

int main() {
	int A,B;
	cin>>A>>B;
	int ans = abs(A-B);
	int modulo = ans%10;
	
	if(modulo<5)
	    cout<<ans+4;
	else  cout<<ans-4;  
	
	return 0;
}
