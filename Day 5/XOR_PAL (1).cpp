#include <iostream>
using namespace std;


int main() {
	int T,n;
	cin>>T;
	while(T--){
	    cin>>n;
	    string str;
	    cin>>str;
	    int end = n - 1;
	    int count = 0;
	    int start = 0;
	    
	    while( start <= end ){
	        if( str[start] !=  str[end] ){
	            count++;
	        }
	        start++;
	        end--;
	    }
	    
	    cout <<  (count + 1)/2 << endl;
	}
	return 0;
}
