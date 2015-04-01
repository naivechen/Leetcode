// https://leetcode.com/problems/rotate-array/


class Solution:
    # @param nums, a list of integer
    # @param k, num of steps
    # @return nothing, please modify the nums list in-place.
    def rotate(self, nums, k):
        n = len(nums)
        dist = 0
        idx = 0
        cur = nums[0]
        for x in range(n):
            next = (idx + k) % n
            tmp = nums[next]
            nums[next] = cur
            idx = next
            cur = tmp
            dist = (dist + k) % n
            if dist == 0:
                idx = (idx + 1) % n
                cur = nums[idx]

