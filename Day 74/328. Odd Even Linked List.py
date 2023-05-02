# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        if(head is None):
            return None

        temp = head
        tempEven = head.next

        flag = True

        while (temp.next is not None):
            curr = temp.next
            temp.next = curr.next
            temp = curr
            flag = not flag
        

        if (flag):
            temp.next = tempEven
            return head
        

        else:
            temp = head
            while(temp.next is not None):
                temp = temp.next
            temp.next = tempEven
            return head
        