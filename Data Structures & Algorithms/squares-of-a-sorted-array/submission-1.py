class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:

        split = 0

        for i in range(len(nums)):
            if nums[i] <= 0:
                split = i
                

        l = split
        r = split+1
        res = []
        while l >= 0 and r < len(nums):
            if abs(nums[l]) < abs(nums[r]):
                res.append(nums[l] ** 2)
                l -= 1
            else:
                res.append(nums[r] ** 2)
                r += 1
        while r < len(nums):
            res.append(nums[r] ** 2)
            r += 1
        while l >= 0:
            res.append(nums[l] ** 2)
            l -= 1
        return res
