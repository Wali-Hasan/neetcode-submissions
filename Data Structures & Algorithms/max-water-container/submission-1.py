class Solution:
    def maxArea(self, heights: List[int]) -> int:

        res = 0
        l, r = 0, len(heights)-1
        while l < r:
            w = r-l
            curr = min(heights[l], heights[r]) * w
            res = max(curr, res)
            if heights[l] < heights[r]:
                l+=1
            else:
                r-=1
        return res 

        