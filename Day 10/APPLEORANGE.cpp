#include <iostream>
using namespace std;

// int applesAndOranges(int N, int M){
    
//     int answer = 1;
//     int mini = min(N,M);
    
//     for(int i = 1 ; i <= mini ; i++){
//         if(N%i == 0 && M%i == 0){
//             answer = i;
//         }
//     }
    
//     return answer;
// }

int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main() {
	int T,N,M;
	cin>>T;
	while(T--){
	    cin>>N>>M;
	   // int answer = 1;
    //     int mini = min(N,M);
    
    //     for(int i = mini ; i >= 1 ; i--){
    //         if(N%i == 0 && M%i == 0){
    //             answer = i;
    //             break;
    //         }
    //     }
        cout<<gcd(N,M)<<endl;
	}
	
	return 0;
}
