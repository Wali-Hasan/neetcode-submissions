class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:

        res = set()

        for e in emails:
            curr = ""
            after_at = False
            i = 0
            while i < len(e):
                if not after_at:
                    if e[i] != '.':
                        curr+=e[i]
                    if e[i] == '+':
                        while i < len(e):
                            if e[i] == '@':
                                break
                            i+=1 
                        after_at = True
                else:
                    curr+=e[i]
                i+=1 
            res.add(curr)
        print(res)
        return len(res)
                        


        