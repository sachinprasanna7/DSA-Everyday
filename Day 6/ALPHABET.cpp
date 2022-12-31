#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	string str;
	cin>>str;
	unordered_map <char,int> mpp;
	
	for(int i = 0 ; i < str.length() ; i++){
	    mpp[str[i]]++;
	}
	
	int N;
	cin>>N;
	while(N--){
	    string str1;
	    cin>>str1;
	    bool flag = true;
	    for(int i = 0 ; i < str1.length() ; i++){
	        if (mpp.find(str1[i]) == mpp.end()){
	           flag = false;
	           break;
	        }  
	    }
	    
	    if(flag){
	        cout<<"Yes\n";
	    }
	    
	    else cout<<"No\n";
	    
	}
	return 0;
}
