class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        hs = set(nums)

        starts = []
        for num in hs:
            if num-1 not in hs:
                starts.append(num)
        
        res = 0
        for num in starts:
            n = num
            curr = 1
            while n+1 in hs:
                curr+=1
                n=n+1
            res = max(res, curr)
        return res; 

        