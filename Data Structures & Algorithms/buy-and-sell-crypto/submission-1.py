class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        res = 0
        min_buy = prices[0]

        for p in prices:
            min_buy = min(min_buy, p)

            res = max(res, p -min_buy)

        return res if res > 0 else 0
        