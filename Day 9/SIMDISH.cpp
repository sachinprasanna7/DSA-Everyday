#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string dish1[4];
	    string dish2[4];
	    unordered_map <string,int> mpp;
	    
	    for(int i = 0 ; i < 4 ; i++){
	        cin>>dish1[i];
	        mpp[dish1[i]] = 1;
	    }
	    
	    for(int i = 0 ; i < 4 ; i++){
	        cin>>dish2[i];
	    }
	    
	    int count = 0;
	    for(int i = 0 ; i < 4 ; i++){
	        if(mpp.find(dish2[i]) != mpp.end()){
	            count++;
	        }
	    }
	    
	    if(count >= 2){
	        cout<<"similar\n";
	    }
	    
	    else cout<<"dissimilar\n";
	}
	return 0;
}
