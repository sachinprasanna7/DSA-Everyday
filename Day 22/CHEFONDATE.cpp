#include <iostream>
using namespace std;

int main() {
    int T,y,x;
    cin>>T;
    while(T--){
        cin>>x>>y;
        if(x>=y) cout<<"YES\n";
        else cout<<"NO\n";
    }
	return 0;
}
