#include <iostream>
using namespace std;

int BuyingSweets(int arr[], int X,int n){
    
    int sum = 0;
    
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    
    int modulo = sum%X;
    
    for(int i = 0; i < n ; i++){
        if(arr[i] <= modulo)
            return -1;
    }
    
    return (sum/X);
}


int main() {
	int T,N,X;
	cin>>T;
	while(T--){
	    cin>>N>>X;
	    int arr[N];
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr[i];
	    }
	    
	    cout<<BuyingSweets(arr,X,N)<<endl;
	}
	return 0;
}
