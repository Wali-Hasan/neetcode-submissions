class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set([n])
        curr = n
        while True:
            if curr == 1:
                return True
            tmp = 0
            while curr > 0:
                tmp += (curr % 10)**2
                curr = curr // 10
            curr = tmp 
            if curr in seen:
                return False
            seen.add(curr)
            
        