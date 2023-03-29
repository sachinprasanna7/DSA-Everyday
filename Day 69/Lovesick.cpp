#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int multiplyArray(vector <int> arr1, vector <int> arr2){

    reverse(arr2.begin(), arr2.end());
    
    int answer = 0;

    for(int i = 0 ; i < arr1.size() ; i++){
        answer += arr1[i]*arr2[i];
    }

    return answer;

}

int maxProduct(vector <int> ans){

    int maxSize = ans.size()/2;

    int answer = INT_MIN;

    for(int i = 1 ; i <= maxSize ; i++){
        
        for(int j = 0 ; j < ans.size() ; j++){
            int startarr1 = j;
            int endarr1 = j + i - 1;

            int startarr2 = j + i;
            int endarr2 = j + 2*i - 1;

            //cout<<startarr1<<" "<<endarr1<<" "<<startarr2<<" "<<endarr2<<endl;

            if(endarr2 >= ans.size()){
                //cout<<"broken at "<<endarr2<<endl;
                break;
            }

            vector <int> arr1;
            
            for(int k = startarr1 ; k <= endarr1 ; k++) arr1.push_back(ans[k]);
            cout<<"\narr1 is: ";
            for (int element : arr1) {
                std::cout << element << " ";
            }
            vector <int> arr2;

            for(int k = startarr2 ; k <= endarr2 ; k++) arr2.push_back(ans[k]);
            cout<<"\narr2 is: ";
            for (int element : arr2) {
                std::cout << element << " ";
            }
             
            int temp = multiplyArray(arr1, arr2);
            answer = max(temp, answer);
        }
    }

    return answer;
}

int main(){

    vector <int> ans = {1,2,3,4};

    cout<< maxProduct(ans);
  
  return 0;
}