#include <iostream>
#include <vector>
using namespace std;





class Solution {

public:
    vector<int> decode(vector<int>& encoded, int first) {

        vector<int> ans;
        ans.push_back(first);
        
        for(int i = 0 ; i < encoded.size() ; i++){
            ans.push_back(encoded[i]^ans[i]);
        }
        return ans;
    }
};


class Solution {                                 //WRONG ANSWER INTITUION CAME FROM SUBTRACTION
//     private:
//         int findCompliment(int n)
// {
//     vector<int> v;
//     // convert to binary representation
//     while (n != 0) {
//         v.push_back(n % 2);
//         n = n / 2;
//     }
//     reverse(v.begin(), v.end());
//     // change 1's to 0 and 0's to 1
//     for (int i = 0; i < v.size(); i++) {
//         if (v[i] == 0)
//             v[i] = 1;
//         else
//             v[i] = 0;
//     }
//     // convert back to number representation
//     int two = 1;
//     for (int i = v.size() - 1; i >= 0; i--) {
//         n = n + v[i] * two;
//         two = two * 2;
//     }
//     return n;
// }

public:
    vector<int> decode(vector<int>& encoded, int first) {

        vector<int> ans;
        ans.push_back(first);
        
        for(int i = 0 ; i < encoded.size() ; i++){
            // int temp = findCompliment(first);
            // first = encoded[i] & temp;
            ans.push_back(abs(encoded[i] - first));
            first = abs(encoded[i] - first);
        }
        return ans;
    }
};

int main(){
  
  return 0;
}