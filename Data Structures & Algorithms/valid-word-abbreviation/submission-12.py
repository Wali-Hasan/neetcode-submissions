class Solution:
    def validWordAbbreviation(self, word: str, abbr: str) -> bool:
        

        i, j = 0, 0

        while i < len(word) and j < len(abbr):
            if word[i] == abbr[j]:
                i+=1
                j+=1
                continue 
            elif abbr[j].isalpha() or abbr[j] == '0':
                print(j)
                return False
            else:
                num = ""
                while j < len(abbr) and abbr[j].isnumeric():
                    num+=abbr[j]
                    j+=1
                i+=int(num)
        return i == len(word) and j == len(abbr)