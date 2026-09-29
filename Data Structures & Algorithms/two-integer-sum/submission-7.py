class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_to_i = dict()
        
        for i, num in enumerate(nums):
            if (target-num) in num_to_i:
                return [num_to_i[target-num], i]
            num_to_i[num] = i
        
