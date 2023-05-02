
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* temp = head;

        while(temp != nullptr && temp -> next != nullptr){
            ListNode* curr = temp -> next;
            
            if(curr -> val == val){
                temp -> next = curr -> next;
                delete (curr);
            }
            

            else temp = temp -> next;
        }

        temp = head;
        
        if(temp){
            if(temp -> val == val) return temp -> next;
        }

        return head;
    }
};