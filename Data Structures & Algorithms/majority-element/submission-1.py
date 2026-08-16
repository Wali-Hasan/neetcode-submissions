class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq = {}

        for n in nums:
            if n not in freq:
                freq[n] = 1
            else:
                freq[n]+=1
            if (freq[n]) > (len(nums)/2):
                return n
        return -1