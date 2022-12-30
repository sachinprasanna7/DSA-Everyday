#include <iostream>
#include <string>

using namespace std;

int isPalindrome(string S)
	{
	    int start = 0;
	    int end = S.length() - 1;
	    
	    while(start < end){
	        if(S[start] != S[end])
	            return false;
	        start++;
	        end--;
	    }
	    
	    return true;
	}

int main(){
  
  return 0;
}


