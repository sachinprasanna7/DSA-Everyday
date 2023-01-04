#include <iostream>
using namespace std;

int applesAndOranges(int N, int M){
    
    int answer = 1;
    int mini = min(N,M);
    
    for(int i = 1 ; i <= mini ; i++){
        if(N%i == 0 && M%i == 0){
            answer = i;
        }
    }
    
    return answer;
}

int main() {
	int T,N,M;
	cin>>T;
	while(T--){
	    cin>>N>>M;
	    int answer = 1;
        int mini = min(N,M);
    
        for(int i = mini ; i >= 1 ; i--){
            if(N%i == 0 && M%i == 0){
                answer = i;
                break;
            }
        }
        cout<<answer<<endl;
	}
	
	return 0;
}
