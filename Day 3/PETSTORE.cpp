#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    bool flag = true;
	    unordered_map <int,int> mpp;
	    cin>>N; 
	    while(N--){
	        int inp;
	        cin>>inp;
	        mpp[inp]++;
	    }
	    for(auto i : mpp){
	        if(i.second % 2 != 0){
	            flag = false; break;
	        }
	    }
	    if(flag) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
