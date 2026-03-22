# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def counter(self, head):
        count = 0
        current = head

        while current:
            count += 1
            current = current.next
        return count

    def removeItem(self, head, index):
        count = 0
        current = head

        while count != index - 1:
            current = current.next
            count += 1
        current.next = current.next.next

    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None or head.next is None:
            return None
        indexToRemove = self.counter(head) // 2
        self.removeItem(head, indexToRemove)
        return head
