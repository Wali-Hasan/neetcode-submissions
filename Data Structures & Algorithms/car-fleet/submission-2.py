class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        stack = []
        position, speed = zip(*sorted(zip(position, speed)))
        
        times = [(target - p) / s for p, s in zip(position, speed)]

        for t in reversed(times):
            if not stack: 
                stack.append(t)
                continue
            
            if (t > stack[-1]):
                stack.append(t)
        return len(stack)
            