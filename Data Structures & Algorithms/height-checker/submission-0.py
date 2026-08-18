class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        arr = [0]*101

        for h in heights:
            arr[h]+=1
        
        expected = []
        for i in range(len(arr)):
            for _ in range(arr[i]):
                expected.append(i)
        res = 0
        for i in range(len(expected)):
            if expected[i] != heights[i]:
                res+=1

        return res 


        