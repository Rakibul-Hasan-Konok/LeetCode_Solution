import math

class Solution:
    def distributeCandies(self, n: int, limit: int) -> int:
        def nC2(x):
            return x * (x - 1) // 2 if x >= 0 else 0
        
        def C3i(i): 
            return [1, 3, 3, 1][i]

        res = 0
        L = limit + 1
        for i in range(4): 
            sign = (-1) ** i
            remaining = n - i * L
            res += sign * C3i(i) * nC2(remaining + 2)
        
        return res
