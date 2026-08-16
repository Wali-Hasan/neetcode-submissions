class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        if n==0: return True
        plants = 0
        for i in range(len(flowerbed)):
            if flowerbed[i] == 0:
                
                if (i == len(flowerbed)-1 and flowerbed[i-1]==0):
                    plants+=1
                    flowerbed[i]=1
                elif (i == 0 and flowerbed[i+1] ==0):
                    plants+=1
                    flowerbed[i]=1
                elif (flowerbed[i-1]==0 and flowerbed[i+1]==0):
                    plants+=1
                    flowerbed[i]=1
                if plants >= n:
                    return True
        return False
        