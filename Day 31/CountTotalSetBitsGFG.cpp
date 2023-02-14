#include <iostream>
#include <cmath>
using namespace std;

int main(){
  
  return 0;
}

//User function Template for C++

//TLE approach
class Solution{
    private:
        int setBits(int n){
            int count = 0;
            while (n) {
                count += n & 1;
                n >>= 1;
            }
            return count;
        }
    
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        int ans = 0;
        int bitCount = 0;
        int number = n;
        while(n){
            bitCount++;
            n /= 2;
        }
        bitCount--;
        ans += (pow(2,bitCount)*bitCount)/2;
        
        for(int i = pow(2,bitCount) ; i <= number ; i++){
            ans += setBits(i);
        }
        return ans;
        
    }
};

//User function Template for C++

class Solution{
    private:
        int bitCtr(int n){
            int bitCount = 0;
            while(n){
                bitCount++;
                n /= 2;
            }
            return bitCount - 1;
        }
    
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        if(n == 0) return 0;
        int bitCount = bitCtr(n);
        return bitCount*pow(2,bitCount-1) + (n - pow(2,bitCount) + 1) + countSetBits(n-pow(2,bitCount));
    }
};