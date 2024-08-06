class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        numbers = {}
        for i in range(len(nums)):
            if nums[i] not in numbers:
                numbers[nums[i]] = 1
            else:
                numbers[nums[i]] += 1
        lowest = min(numbers, key=numbers.get)
        return lowest