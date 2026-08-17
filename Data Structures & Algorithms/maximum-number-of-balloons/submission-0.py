class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        b_cnt = Counter("balloon")


        cnt = Counter(text)

        res = []


        for c in b_cnt:
            res.append(cnt[c] // b_cnt[c])
        return min(res)
            
            
