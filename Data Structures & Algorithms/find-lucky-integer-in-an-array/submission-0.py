class Solution:
    def findLucky(self, arr: List[int]) -> int:
        count = Counter(arr)
        res = -1 
        for n in count:
            if count[n] !=n:
                continue
            res = max(res, n)
        return res