#include <iostream>
using namespace std;

 int middle(int A, int B, int C){
        
        if(A<B && A<C){
            if(B<C)
                return B;
            return C;
        }
        
        else if(B<C && B<A){
            if(C<A)
                return C;
            return A;
        }
        
        else{
            if(A<B)
                return A;
            return B;
        }
    }

 int Optimised(int A, int B, int C){
    
      if (A < B)
        return (B < C)? B : max(A, C);
      return (A < C)? A : max(B, C);
}

int main(){
  
  return 0;
}