class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        inc = 0
        dec = 0

        curr_inc = 0
        curr_dec = 0
        for i in range(1, len(nums)):
            if nums[i] > nums[i-1]:
                curr_dec = 0
                curr_inc +=1 
                
            elif nums[i] < nums[i-1]:
                curr_inc = 0
                curr_dec+=1 
            else:
                curr_inc = 0
                curr_dec =0
            inc = max(curr_inc, inc)
            dec= max(curr_dec, dec)
        return max(inc, dec)+1
        