class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        val_to_freq = {}
        for n in nums:
            if n in val_to_freq:
                val_to_freq[n]+=1
            else:
                val_to_freq[n] = 1
      
        freq_bucket = [list() for _ in range(len(nums))]

        for n in val_to_freq:
            freq_bucket[val_to_freq[n]-1].append(n)
        i = 0
        most = len(freq_bucket) - 1
        final = []
        while i != k:
            if not freq_bucket[most]:
                most -=1
                continue
            final.append(freq_bucket[most].pop())
            i+=1
        return final