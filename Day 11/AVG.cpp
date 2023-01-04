#include <iostream>
using namespace std;

int main() {
	int T,N,K,V;
	cin>>T;
	while(T--){
	    cin>>N>>K>>V;;
	    int arr[N];
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr[i];
	    }
	    int sum  = 0;
	    for(int i = 0 ; i < N ; i++){
	        sum += arr[i];
	    }
	    int modu = (V*(K+N) - sum)%K;
	    int ans = (V*(K+N) - sum)/K;
	    if(modu == 0 && ans > 0){
	        cout<<ans<<endl;
	    }
	    else cout<<-1<<endl;
	    
	}
	return 0;
}
