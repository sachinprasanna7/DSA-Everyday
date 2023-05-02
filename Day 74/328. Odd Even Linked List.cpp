#include <iostream>
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
    ListNode* oddEvenList(ListNode* head) {

        if(head == nullptr) return nullptr;

        ListNode* temp = head;
        ListNode* tempEven = head -> next;

        bool flag = true;

        while(temp -> next != nullptr && temp != nullptr){
            ListNode* curr = temp -> next;
            temp -> next = curr -> next;
            temp = curr;
            flag = !flag;
        }

        if(flag){
            temp -> next = tempEven;
            return head;
        }

        else{
            temp = head;
            while(temp -> next != nullptr) temp = temp -> next;
            temp -> next = tempEven;
            return head;
        }
        
    }
};

int main(){
  
  return 0;
}