#include <iostream>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	
	while(T--){
	    long long int N, i, flag=0, temp;
	    cin>>N;
	    long long int a[N];
	    for(i=0; i<N; ++i)
	    {
	        cin>>a[i];
	    }
	    for(i=0; i<N; ++i)
	    {
	        if(a[i]>a[i+1])
	        {
	            temp=a[i];
	            a[i]=a[i+1];
	            a[i+1]=temp;
	            break;
	        }
	    }
	    for(i=0; i<N; ++i)
	    {
	        if(a[i]>a[i+1])
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"NO"<<endl;
	    }
	    else 
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
