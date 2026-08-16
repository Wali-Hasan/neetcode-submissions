class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1idx = {n: i for i, n in enumerate(nums1)}
        res = [-1]*len(nums1)

        stack = []


        for n in nums2:
            while stack and n > stack[-1]:
                idx = nums1idx[stack.pop()]
                res[idx] = n
            if n in nums1idx:
                stack.append(n)
        return res 

            
            
