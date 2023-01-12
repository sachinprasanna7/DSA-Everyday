#include <iostream>
using namespace std;

string Solve(int n){
    
    while(n!=0){
        int digit = n%10;
        if(digit == 7) return "YES";
        n/=10;
    }
    return "NO";
}

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    cout<<Solve(N)<<endl;
	}
	    
	
	return 0;
}
