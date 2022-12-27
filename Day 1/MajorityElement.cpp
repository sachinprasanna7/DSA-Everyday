#include <iostream>
using namespace std;

int majorityElement(int a[], int size)
    {
       int majorityIndex = 0;
       int count = 1;
       
       for(int i = 1; i < size ; i++){
           if(a[i] == a[majorityIndex]) count++;
           else count--;
           
           if(count == 0){
               majorityIndex = i;
               count = 1;
           }
       }
       
       int answer = a[majorityIndex];
       count = 0;
       for(int i = 0 ; i < size ; i++){
           if(a[i] == answer) count++;
       }
       
       if(2*count > size) return answer;
       else return -1;
        
    }


/**  Moores Voting Algorithm  **/
int findCandidate(int a[], int size)
{
    int maj_index = 0, count = 1;
    for (int i = 1; i < size; i++) {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;
        if (count == 0) {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}

bool isMajority(int a[], int size, int cand)
{
    int count = 0;
    for (int i = 0; i < size; i++)

        if (a[i] == cand)
            count++;

    if (count > size / 2)
        return 1;

    else
        return 0;
}





int main(){
  
  cout<<"hi";
  return 0;
}