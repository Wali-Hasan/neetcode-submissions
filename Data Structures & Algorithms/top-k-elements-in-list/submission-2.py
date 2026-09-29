class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = [[] for _ in range(len(nums)+1)]

        nums_count = Counter(nums)

        for n, f in nums_count.items():
            freq[f].append(n)
        res = []
        i = len(freq)-1
        while i > 0 and k > 0:
            while not freq[i]:
                i-=1
            curr = freq[i].pop()
            res.append(curr)
            k-=1

        return res 