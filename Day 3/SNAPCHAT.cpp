#include <iostream>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	   cin>>N;
	   int arr1[N];
	   int arr2[N];

	   for(int i = 0 ; i < N ; i++){
	        cin>>arr1[i];
	   }
	   cout<<endl;
	   for(int i = 0 ; i < N ; i++){
	        cin>>arr2[i];
	   }
	   
	   int MaxAns = 0;
	   int ans = 0;
	   for(int i = 0 ; i < N ; i++){
	        if(arr1[i] != 0 && arr2[i] != 0) ans++;
	        else{
	            if(ans > MaxAns) 
	                MaxAns = ans;
	            ans = 0;
	        }
	   }
	   cout<<max(MaxAns,ans);
	   
	    
	}
	return 0;
}
