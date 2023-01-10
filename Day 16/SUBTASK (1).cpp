#include <iostream>
using namespace std;
void problem(){
    int n,k,m;
    cin>>n>>k>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=1;
    int countm=0;
    for(int i=0;i<k;i++){
        if(a[i]==1)  countm++;
        else if(a[i]==0){
            count=0;
            break;
        }
    }

    int counte=0;
    for(int i=k;i<n;i++){
        if(a[i]==1)  counte++;
    }
   
    if((countm+counte)==n) cout<<100<<endl;
    else if(count=1 && countm==k)cout<<m<<endl;
    else cout<<0<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    problem();
	}
	return 0;
}
