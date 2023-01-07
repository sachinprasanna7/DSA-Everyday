#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        int arr[N];
        for(int i = 0 ; i < N ; i++){
            cin>>arr[i];
        }
        
        vector <int> ans;
        int count = 0;
        for(int i = 0 ; i < N ; i++){
            count++;
            if(arr[i] <= 7) ans.push_back(arr[i]);
            if(ans.size() == 7) break;
        }
        
        cout<<count<<endl;
    }
	return 0;
}
