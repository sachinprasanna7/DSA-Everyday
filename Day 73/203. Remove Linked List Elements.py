# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:

        temp = head

        while(temp is not None and temp.next is not None):
            curr = temp.next
            
            if(curr.val == val):
                temp.next = curr.next
                curr = None

            else:
                temp = temp.next

        temp = head
        
        if(temp):
            if(temp.val == val):
                return temp.next

        return head