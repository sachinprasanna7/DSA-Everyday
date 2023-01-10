#include <iostream>
using namespace std;

int Solve(int arr[], int M,int K,int N){
    
    if(arr[0] != 1 || arr[1] != 1) return 0;
    
    bool flag = false;
    int cnt = 2;
    for(int i = 2 ; i < N ; i++){
        if(arr[i] == 0 && i < M){
            flag = true;
        }
        else if(arr[i] == 1){
            cnt++;
        }
    }
    
    if(flag) return 0;
    if(cnt == N) return 100;
    return K;
}

int main() {
	int T,N,M,K;
	cin>>T;
	while(T--){
	    cin>>N>>M>>K;
	    int arr[N];
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr[i];
	    }
	    
	    cout<<Solve(arr,M,K,N)<<endl;
	}
	return 0;
}
