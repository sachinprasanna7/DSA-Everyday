#include <iostream>
#include <vector>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:

    vector <int> ans;
    Solution(ListNode* head) {
        
        ListNode* temp = head;
        //temp = head;

        while(temp != nullptr){
            ans.push_back(temp -> val);
            temp = temp -> next;
        }
    }
    
    int getRandom() {
        return(ans[rand() % ans.size()]);
    }
};


//RESERVOIR SAMPLING ALGORITHM


int main(){
  
  return 0;
}