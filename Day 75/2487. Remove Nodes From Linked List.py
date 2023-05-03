# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:

    def reverse(self, head):

            prev = None
            curr = head

            while(curr is not None):
                forward = curr.next
                curr.next = prev
                prev = curr
                curr = forward
            
            return prev

    def removeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:

        head = self.reverse(head)

        temp = head

        maxi = temp.val

        while (temp.next is not None):
            
            curr = temp.next

            if(curr.val >= maxi):
                maxi = curr.val
                temp = temp.next
            
            else:
                temp.next = curr.next
                curr.next = None
                curr = None

        head = self.reverse(head)

        return head

        
                


            