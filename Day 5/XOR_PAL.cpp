#include <iostream>
using namespace std;

int XorPalindrome(string str, int n){
    
    int count = 0;
    int start = 0;
    int end = n - 1;
    
    while(start < end){
        if(str[start] == str[end]){
            start++;
            end--;
        }
        
        else if(str[start] != str[start+1] && (str[start] != str[end]) && (str[start+1] != str[end-1])){
            count += 2;
            start +=2;
            end -= 2;
        }
        
        else if(str[start] == str[start+1] && (str[start] != str[end]) && (str[start+1] != str[end-1])){
            count += 1;
            start +=2;
            end -= 2;
        }
        
        else if (start + 1 == end - 1){
            count++;
            start++;
            end--;
        }
    }
    
    return count;
}
    


int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    string str;
	    cin>>str;
	    cout<<XorPalindrome(str, N)<<endl;
	}
	return 0;
}
