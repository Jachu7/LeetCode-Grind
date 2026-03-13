class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        dp = []
        dp.append(cost[0])
        i = 1

        while i < len(cost):
            if i >= 2:
                dp.append(min(dp[i-1], dp[i-2]) + cost[i])
            else:
                dp.append(min((dp[i-1] + cost[i]), cost[i]))
            i += 1

        return(min(dp[-1], dp[-2]))
