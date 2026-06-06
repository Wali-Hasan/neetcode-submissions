class Solution:
    def isPalindrome(self, s: str) -> bool:
        i=0
        j=i
        while i < len(s)//2 and j < len(s):
            last = len(s)-j-1
            first = i
        
            if not s[last].isalnum():
                j+=1
                continue
            if not s[first].isalnum():
                i+=1
                continue
            if s[first].lower() != s[last].lower():
                return False
            i+=1
            j+=1
        return True
