class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        hs = set(nums)
        longest = 0
        for n in hs:
            if n-1 not in hs:
                i=0
                while n+i in hs:
                    i+=1
                if i > longest:
                    longest = i
        return longest 



        