#include <iostream>
using namespace std;


 
  struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head -> next == NULL)
            return NULL;
        
        if(head -> next == head)
            return head;
        
        bool flag = 0;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=NULL){
            fast = fast->next;
            if(fast !=NULL)
                fast = fast->next;
            slow = slow->next;
            
            if(slow == fast){
                flag = 1;
                slow = head;
                break;
            }
        }
        
        if(flag == 1){
            while(slow!=fast){
                fast = fast -> next;
                slow = slow -> next;
            }
            return slow;
        }
        
        return NULL;
        
    }
    
};

int main(){
  
  return 0;
}