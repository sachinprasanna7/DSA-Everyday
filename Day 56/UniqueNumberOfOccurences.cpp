#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map <int, int> mpp;

        for(int i = 0 ; i < arr.size() ; i++){
            mpp[arr[i]]++;
        }

        set <int> storer;

        for(auto i : mpp){
            storer.insert(i.second);
        }

        return mpp.size() == storer.size();
    }
};

int main(){
  
  return 0;
}