class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        count = Counter(ransomNote)

        for c in magazine:
            if c in count:
                count[c]-=1

        for c in count:
            if count[c] > 0:
                return False
        return True 
        