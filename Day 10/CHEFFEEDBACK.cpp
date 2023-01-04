#include <iostream>
#include <string>
using namespace std;

string chefAndFeedback(string str){
    
    string bin1 = "010";
    string bin2 = "101";
    for(int i = 0 ; i < str.size() - 2 ; i++){
	   string temp = str.substr(i,3);
	   if(temp.compare(bin1) == 0 || temp.compare(bin2) == 0){
	       return "Good";
	   }
	}
	return "Bad";
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    string str;
	    cin>>str;
	    
	    cout<<chefAndFeedback(str)<<endl;
	}
	return 0;
}
