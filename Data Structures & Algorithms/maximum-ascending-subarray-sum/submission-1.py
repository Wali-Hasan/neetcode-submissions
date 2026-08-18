class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        res = nums[0]
        curr = nums[0]

        for i in range(len(nums)-1):
            if nums[i] < nums[i+1]:
                curr+=nums[i+1]
            else:
                
                curr = nums[i+1]
            res = max(res, curr)
        return res 
