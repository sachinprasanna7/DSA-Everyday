#include <iostream>
using namespace std;

string Solve(string str){
    
    int count = 0;
    
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' ){
            count++;
            if(count == 4) return "NO";
        }
        else count = 0;
    }
    return "YES";
}

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    string str;
	    cin>>str;
	    
	    cout<<Solve(str)<<endl;
	}
	return 0;
}
