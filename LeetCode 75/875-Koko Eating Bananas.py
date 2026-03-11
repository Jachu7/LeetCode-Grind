class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left = 1
        right = max(piles)

        while left < right:
            mid = (left + right) // 2
            counter = 0
            for i in range(len(piles)):
                counter += math.ceil(piles[i] / mid)
            if counter <= h:
                right = mid
            elif counter > h:
                left = mid + 1

        return right
