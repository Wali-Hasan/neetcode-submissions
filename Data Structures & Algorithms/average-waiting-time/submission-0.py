class Solution:
    def averageWaitingTime(self, customers: List[List[int]]) -> float:
        time = customers[0][0]
        res = 0
        for c in customers:
            if (c[0] > time):
                time = c[0]
            time += c[1]
            res = res + (time-c[0])
        return res / len(customers)