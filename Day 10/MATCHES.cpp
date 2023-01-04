#include <iostream>
#include <unordered_map>
using namespace std;

int playingWithMatches(int num, unordered_map<int,int> mpp){
    
    int ans = 0;
    while(num != 0){
        int digit = num % 10;
        ans += mpp[digit];
        num /= 10;
    }
    
    return ans;
}

int main() {
	int T,n1,n2;
	cin>>T;
	while(T--){
	    cin>>n1>>n2;
	    unordered_map<int,int> mpp;
	    mpp[0] = 6;
	    mpp[1] = 2;
	    mpp[2] = 5;
	    mpp[3] = 5;
	    mpp[4] = 4;
	    mpp[5] = 5;
	    mpp[6] = 6;
	    mpp[7] = 3;
	    mpp[8] = 7;
	    mpp[9] = 6;
	    
	    int ans = n1+n2;
	    cout<<playingWithMatches(ans,mpp)<<endl;
	}
	return 0;
}
