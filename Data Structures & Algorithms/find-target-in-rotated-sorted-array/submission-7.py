class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        l, r = 0, len(nums)-1
        while l < r: 
            m = (l + r) // 2
            if nums[m] > nums[r]:
                l=m+1
            else:
                r = m

        pivot = l 
        print(l)
        r = len(nums)-1

        
        # if target greater than last than its in the begginning, else its after the pivot
        if target > nums[r]:
            l = 0
            r = pivot

        while l <= r:
            m = (l+r) // 2
            if nums[m] == target: 
                return m
            elif target > nums[m]:
                l=m+1
            else:
                r=m-1
        return -1
                  
                

        