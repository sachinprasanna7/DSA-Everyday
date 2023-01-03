#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        
        for(int i = 2 ; i < str.size() - 2 ; i++){
            if(str[i] == 'r' && str[i-1] == 'a' && str[i-2] == 'p'&& str[i+1] == 't' && str[i+2] == 'y')  str[i] = 'w';
        }
        
        for(int i = 4 ; i < str.size() ; i++){
            if(str[i] == 'y' && str[i-1] == 't' && str[i-2] == 'w'&& str[i-3] == 'a' && str[i-4] == 'p')  str[i] = 'i';
        }
        
        for(int i = 3 ; i < str.size() - 1 ; i++){
            if(str[i] == 't' && str[i-1] == 'w' && str[i-2] == 'a'&& str[i-3] == 'p' && str[i+1] == 'i')  str[i] = 'r';
        }
        
        cout<<str<<endl;
    }
	return 0;
}
