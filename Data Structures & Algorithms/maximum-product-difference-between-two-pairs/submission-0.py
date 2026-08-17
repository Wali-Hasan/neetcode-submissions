class Solution:
    def maxProductDifference(self, nums: List[int]) -> int:
        maxes = [float('-inf'), float('-inf')]
        mins = [float('inf'), float('inf')]

        for n in nums:
            if n > maxes[0]:
                maxes[1] = maxes[0]
                maxes[0] = n
            elif n > maxes[1]:
                maxes[1] = n
            if n < mins[0]:
                mins[1] = mins[0]
                mins[0] = n
            elif n < mins[1]:
                mins[1] = n

        return int((maxes[0]*maxes[1])-(mins[0]*mins[1]))