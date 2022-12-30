#include <iostream>
using namespace std;

int Solve(int arr[], int n, int X, int C){
    
    int count = 0 , sum = 0;
    for(int i = 0 ; i < n ; i++){
        if(X - arr[i] > C){
            arr[i] = X;
            count += C;
        }
        sum += arr[i];
    }
    
    return sum - count;
}

int main() {
	int T,N,X,C;
	cin>>T;
	while(T--){
	    cin>>N>>X>>C;
	    int arr[N];
	    
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr[i];
	    }
	    
	    cout<<Solve(arr,N,X,C)<<endl;
	    
	}
	return 0;
}
