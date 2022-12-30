#include <iostream>
using namespace std;

void Solve(int P1, int P2, int K){
    
    int sum = P1 + P2;
    
    if(P1 == 0 || P2 == 0){
        if(sum == 0){
            cout<<"CHEF\n";
            return ;
        }
        int divi = sum / K;
        if(divi % 2 == 0){
            cout<<"CHEF\n";
            return ;
        }
        else{
            cout<<"COOK\n";
            return;
        }
    }
    else{
        int divi = sum / K;
        if(divi % 2 == 0){
            cout<<"CHEF\n";
            return ;
        }
        else{
            cout<<"COOK\n";
            return;
        }
    }
}

int main() {
	int T,P1,P2,K;
	cin>>T;
	while(T--){
	    cin>>P1>>P2>>K;
	    Solve(P1,P2,K);
	}
	return 0;
}
