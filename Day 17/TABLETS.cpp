#include <iostream>
using namespace std;

int main() {
    int T,X,Y;
    cin>>T;
    while(T--){
        cin>>X>>Y;
        if(Y>=3*X) cout<<"YES\n";
        else cout<<"NO\n";
    }
	return 0;
}
