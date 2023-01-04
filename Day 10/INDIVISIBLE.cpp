#include <iostream>
using namespace std;

int indivisible(int a, int b, int c){
    for(int i = 2 ; i < 100 ; i++){
        if(a%i != 0 && b%i != 0 && c%i != 0)
            return i;
    }
}
    


int main() {
	int T,A,B,C;
	cin>>T;
	while(T--){
	    cin>>A>>B>>C;
	    cout<<indivisible(A,B,C)<<endl;
	}
	return 0;
}
