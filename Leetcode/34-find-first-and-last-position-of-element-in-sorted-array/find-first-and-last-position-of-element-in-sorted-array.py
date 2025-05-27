class Solution(object):
    def searchRange(self, nums, target):
        lb = bisect.bisect_left(nums, target)
        ub = bisect.bisect_right(nums, target)
        if lb == ub:
            return [-1, -1]
        return [lb, ub - 1]
        