class Solution:
    def rob(self, nums: List[int]) -> int:
        dp = []
        if len(nums) <= 2:
            return max(nums)
        dp.append(nums[0])
        dp.append(max(nums[0],nums[1]))

        i = 2
        while i < len(nums):
            dp.append(max(dp[i-1],dp[i-2] + nums[i]))
            i += 1

        return(max(dp))
