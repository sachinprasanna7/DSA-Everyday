#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    long long arr[N];
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr[i];
	    }
	    
	    sort(arr, arr+N);
	    
	    long long X = arr[0];
	    long long Z = arr[N-1];
	    long long maxi = arr[1];
	    for(long long i = 2 ; i < N-1 ; i++){
	        if((arr[i]-X) + (Z-arr[i]) > maxi) maxi = arr[i];
	    }
	    cout<<((Z-X) + (Z-maxi) + (maxi-X))<<endl;
	}
	return 0;
}

//int avg = (X+Z)/2;
//int mini = 10000000000;
	   // for(int i = 1 ; i < N-1 ; i++){
	   //     if(abs(avg - arr[i]) < mini) mini = arr[i];
	   // }
	   // cout<<((Z-X) + (Z-mini) + (mini-X))<<endl;
