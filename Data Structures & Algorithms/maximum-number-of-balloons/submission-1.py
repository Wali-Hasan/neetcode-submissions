class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        b_cnt = Counter("balloon")


        cnt = Counter(text)

        res = float('inf')


        for c in b_cnt:
            res = min(res, cnt[c] // b_cnt[c])
        return int(res)
            
            
