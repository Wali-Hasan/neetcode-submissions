class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums_set = set(nums)
        res = 0
        for n in nums_set:
            curr = 0
            if n-1 not in nums_set:
                c = n
                while c in nums_set:
                    curr+=1
                    c+=1
                res = max(curr, res)
                curr = 0
        return res 