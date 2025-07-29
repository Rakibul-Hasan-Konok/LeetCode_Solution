class Solution:
    def smallestSubarrays(self, nums: List[int]) -> List[int]:
        n = len(nums)
        last = [-1] * 32
        res = [1] * n
        for i in range(n - 1, -1, -1):
            for b in range(32):
                if nums[i] & (1 << b):
                    last[b] = i
            max_pos = i
            for b in range(32):
                if last[b] != -1:
                    max_pos = max(max_pos, last[b])
            res[i] = max_pos - i + 1
        return res
