#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        string party = "party";
        string ans = "";
        for(int i = 0 ; i < str.size() ; i++){
            string temp = str.substr(i,5);
            if(temp.compare(party) == 0){
                ans += "pawri";
                i += 4;
            }
            else{
                ans += str[i];
            }
        }
        
        cout<<ans<<endl;
    }
	return 0;
}
