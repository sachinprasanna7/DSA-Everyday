#include <iostream>
#include <vector>
using namespace std;

int main(){
  
  return 0;
}

class Solution {

    private:

    void merge(vector <int> &nums, int start, int end) {

        int mid = (start+end)/2;

        int len1 = mid-start+1;
        int len2 = end-mid;

        int *first = new int[len1];
        int *second = new int[len2];

        int ctr = start;
        for(int i=0; i<len1; i++) {
            first[i] = nums[ctr++];
        }

        ctr = mid+1;
        for(int i=0; i<len2; i++) {
            second[i] = nums[ctr++];
        }
    
        int i1 = 0;
        int i2 = 0;
        ctr = start;

        while ((i1 < len1) && (i2 < len2)) {
            if(first[i1] < second[i2]) {
                nums[ctr++] = first[i1++];
            }
            else{
                nums[ctr++] = second[i2++];
            }
        }   

        while(i1 < len1) {
            nums[ctr++] = first[i1++];
        }

        while(i2 < len2) {
            nums[ctr++] = second[i2++];
        }
        
        delete []first;
        delete []second;
    }

    void mergeSort(vector <int>& nums, int start, int end) {

        if(start >= end) {
            return;
        }
        int mid = (start+end)/2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid+1, end);
        merge(nums, start, end);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        
        mergeSort(nums, 0 , nums.size() - 1);
        return nums;
    }
};