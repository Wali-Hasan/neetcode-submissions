class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        val_i = {}
        for i in range(len(nums)):
            difference = target - nums[i]
            if difference in val_i:
                return [val_i[difference],i]
            val_i[nums[i]] = i
        





        