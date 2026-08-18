class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        def isVowel(c):
            return (c == 'a' or c == 'e' or c =='i' or c == 'o' or c =='u')
        left = [0]*(len(words)+1)
        for i in range(1, len(left)):
            if isVowel(words[i-1][0]) and isVowel(words[i-1][-1]):
                left[i] = left[i-1]+1
            else:
                left[i] = left[i-1]

        ans = []
        for q in queries:
            ans.append(left[q[1]+1]-left[q[0]])
        return ans 
