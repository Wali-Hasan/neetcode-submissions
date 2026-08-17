class Solution:
    def maxScore(self, s: str) -> int:
        
        res = (1 if s[0] == '0' else 0)

        for c in s[1:]:
            res+= (1 if c == '1' else 0)
        print(res)
        curr = res 
        for i in range(1, len(s)-1):
            
            if s[i] == '0':
                curr+=1 
            else:
                curr-=1
            res=max(res, curr)
        return res 