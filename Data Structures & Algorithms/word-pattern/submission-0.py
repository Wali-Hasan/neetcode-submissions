class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        

        words = s.split()

        if len(words) != len(pattern):
            return False 
        
        word_to_c = {}
        c_to_word = {}

        for c, w in zip(pattern, words):
            if c in c_to_word and c_to_word[c] != w:
                return False
            if w in word_to_c and word_to_c[w] != c:
                return False
            c_to_word[c] = w
            word_to_c[w] = c

        return True 

        