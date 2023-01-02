#include <iostream>
using namespace std;

int main() {
    int T,N,A,B,C;
    cin>>T;
    while(T--){
        cin>>N>>A>>B>>C;
        
        if((A+C >= N) && (N<=B)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
	return 0;
}
