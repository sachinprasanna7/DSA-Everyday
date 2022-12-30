#include <iostream>
#include <string>
using namespace std;

string Solve(string str, int N){
    
    for(int i = 0 ; i < N ; i++){
        
        if(str[i] == 'I')
            return "INDIAN";
        
        else if(str[i] == 'Y')
            return "NOT INDIAN";
    }
    
    return "NOT SURE";
}

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    string str;
	    cin>>str;
	    
	    cout<< Solve(str, N) <<endl;
	}
	
	return 0;
}
