//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int ans = 0;
        
        while(b > 0 || a > 0){
            int bit1 = a & 1;
            int bit2 = b & 1;
            if(bit1 != bit2) ans++;
            a = a >> 1;
            b = b >> 1;
        }
        return ans;
        
    }
};

//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int ans = 0;
        
        while(b > 0 || a > 0){
            int digit1 = a%2;
            int digit2 = b%2;
            if(digit1 != digit2) ans++;
            a /= 2;
            b /= 2;
        }
        return ans;
        
    }
};

//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int ans = 0;
        int xored = a^b;
        while(xored){
            ans += xored & 1;
            xored = xored >> 1;
        }
        return ans;
        
    }
};