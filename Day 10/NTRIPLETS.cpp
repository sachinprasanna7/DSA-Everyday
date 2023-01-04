#include <iostream>
#include <cmath>
using namespace std;

void solve(int N){

    for(int i = 2; i <= sqrt(N) ; i++){
        if(N%i == 0 && N/i != i){
            cout<<1<<" "<<i<<" "<<N/i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}


int main() {
	int T,N;
	cin>>T;
	while(T--){
	   cin>>N;
	   solve(N);
       
	   
	}
	return 0;
}
