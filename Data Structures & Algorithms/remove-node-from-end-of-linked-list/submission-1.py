# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        
        def reverse(l):
            curr = l
            prev = None

            while curr:
                tmp = curr.next
                curr.next = prev
                prev = curr
                curr = tmp
            return prev
        r = reverse(head)
        dummy = ListNode(0, r)   # real dummy node in front of reversed list

        prev = dummy
        for _ in range(n - 1):   # stop just before the nth node
            prev = prev.next
        prev.next = prev.next.next   # skip it

        return reverse(dummy.next)
        
       
        

        return reverse(r)

