#include <iostream>
using namespace std;

int coinFlip(int I, int N, int Q){
    
    int arr[N] = {0};
    int zeroCount = 0;
    int oneCount = 0;
    
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j<= i; j++){
            arr[j] = ~arr[j];
            if(i == N-1){
                if(arr[j] == 0) zeroCount++;
                else oneCount++;
            }
        }
    }
    
    /*0 - Heads
      1 - Tails*/
      
    if(I == 1){      //Initially HEADS
        if(Q==1){   //Find Head
            return zeroCount;
        }
        else{        //Find Tail
            return oneCount;
        }
    }
    else{            //Initially TAILS
        if(Q==1){    //Find Head
             return oneCount;
        }
        else{        //Find Tail
            return zeroCount;
        }
    }
}

int main() {
	int T,G,N,I,Q;
	cin>>T;
	while(T--){
	   cin>>G;
	   while(G--){
	       cin>>I>>N>>Q;
	       cout<<coinFlip(I,N,Q)<<endl;
	   }
	}
	return 0;
}
