#include <iostream>
#include <string>
using namespace std;

void chefAndFeedback(string str){
    if (str.find("101")!=-1 || str.find("010")!=-1) cout << "Good"<<endl;
    else cout << "Bad"<<endl;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    string str;
	    cin>>str;
	    
	    chefAndFeedback(str);
	}
	return 0;
}
