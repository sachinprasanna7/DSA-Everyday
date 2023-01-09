#include <iostream>
using namespace std;

int main() {
	int T,num;
	cin>>T;
	while(T--){
	    string str;
	    cin>>str;
	    int zero_count = 0;
	    int one_count = 0;
	    int count = 0;
	    for(int i = 0 ; i < str.size() ; i++){
	        if(str[i] == '0') zero_count++;
	        else one_count++;
	    }
	    
	    if(str.size() - one_count == 1 || str.size() - zero_count == 1){
	        cout<<"Yes\n";
	    } 
	    else cout<<"No\n";
	    
	}
	return 0;
}
