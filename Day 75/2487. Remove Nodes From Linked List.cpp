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
    private:

        ListNode* reverse(ListNode* head){

            ListNode* prev = nullptr;
            ListNode* curr = head;

            while(curr != nullptr){
                ListNode* forward = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = forward;
            }

            return prev;

        }

public:
    ListNode* removeNodes(ListNode* head) {
        
        head = reverse(head);

        ListNode* temp = head;

        int maxi = temp -> val;

        while(temp -> next != nullptr){
            
            ListNode* curr = temp -> next;

            if(curr -> val >= maxi){
                maxi = curr -> val;
                temp = temp -> next;
            }

            else{
                temp -> next = curr -> next;
                curr -> next = nullptr;
                delete(curr);
            }
        }

        head = reverse(head);

        return head;
        
        
    }
};

int main(){
  
  return 0;
}