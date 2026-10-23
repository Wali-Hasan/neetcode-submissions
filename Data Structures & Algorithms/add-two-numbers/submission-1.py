# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        i = 0
        carry = False
        dummy = ListNode()
        cur = dummy 
        while l1 or l2 or carry:
            v1 = l1.val if l1 else 0
            v2 = l2.val if l2 else 0

            v = v1 + v2 + (1 if carry else 0)

            if v >= 10:
                carry = True
                v = v - 10
            else:
                carry = False
            
            cur.next=ListNode(v)
            l1=l1.next if l1 else l1
            l2=l2.next if l2 else l2
            cur = cur.next
        return dummy.next
            

                
        