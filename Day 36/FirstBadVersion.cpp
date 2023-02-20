#include <iostream>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


//DUMMY FUNCTION
bool isBadVersion(int i){
    return false;
}

class Solution {
public:
    int firstBadVersion(int n) {

        for(int i = n ; i > 0 ; i--){
            if(!isBadVersion(i)) return i+1;
        }

        return 1;
    }
};


//OPTIMISED USING BINARY SEARCH

class Solution {
public:
    int firstBadVersion(int n) {

        int start = 1;
        int end = n;
        int mid = start + (end - start)/2;

        while(start <= end){

            if(isBadVersion(mid) && (!isBadVersion(mid - 1)))
                return mid;
            else if (!isBadVersion(mid)){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }

            mid = start + (end - start) / 2;
            
        }

        return mid;
    }
};

int main(){
  
  return 0;
}