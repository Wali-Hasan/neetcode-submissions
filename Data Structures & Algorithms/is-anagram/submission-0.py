class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        count_s, count_t = {}, {}
        if len(s) != len(t):
            return False

        for cs, ct in zip(s, t):
            if cs in count_s:
                count_s[cs] += 1
            else:
                count_s[cs] = 1
            if ct in count_t:
                count_t[ct] += 1
            else:
                count_t[ct] = 1
        
        return count_s == count_t
        