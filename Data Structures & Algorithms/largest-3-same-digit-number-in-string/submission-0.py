class Solution:
    def largestGoodInteger(self, num: str) -> str:
        res = -1

        curr = num[0]
        count = 0

        for c in num:
            if c == curr:
                count+=1
                if count == 3:
                    res = max(res, int(c))
            else:
                curr = c
                count = 1
        return str(res)*3 if res != -1 else ""

        