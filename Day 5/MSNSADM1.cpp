#include <iostream>
using namespace std;

int Solve(int arr1[], int arr2[], int n){
    
    int maxPoints = 0;
    for(int i = 0 ; i < n ; i++){
        int points = (arr1[i]*20 - arr2[i]*10);
        points = max(points,0);
        maxPoints = max(points, maxPoints);
    }
    
    return maxPoints;
}

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int arr1[N], arr2[N];
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr1[i];
	    }
	    
	    for(int i = 0 ; i < N ; i++){
	        cin>>arr2[i];
	    }
	    
	    cout<<Solve(arr1,arr2,N)<<endl;
	}
	return 0;
}
