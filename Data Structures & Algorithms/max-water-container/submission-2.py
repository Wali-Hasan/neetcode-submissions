class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l = 0
        r= len(heights)-1

        res = 0
        while l < r:
            if heights[l] < heights[r]:
                area = (r-l)*heights[l]
                res = max(area, res)
                l+=1
            else:
                area = (r-l)*heights[r]
                res = max(area, res)
                r-=1
        return res