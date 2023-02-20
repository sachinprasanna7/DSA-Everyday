#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
	long long int N;
	cin>>N;
	long long int ans[N];
	
	for(int i = 0 ; i < N ; i++){
	   cin>>ans[i];
	}
	
	sort(ans, ans + N);

	long long int answer = 0;
	
	for(int i = 0 ; i < N - 1; i++){
	    answer = answer + ans[i]*ans[i+1];
	}
	
	
	cout<<answer;
	
	return 0;
}
