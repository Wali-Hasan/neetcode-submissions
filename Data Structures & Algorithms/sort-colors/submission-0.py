class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        numMap = [0] * 3

        for n in nums: 
            numMap[n]+=1
        idx = 0
        for i, n in enumerate(numMap):
            for _ in range(n):
                nums[idx]=i
                idx+=1
        
                
        