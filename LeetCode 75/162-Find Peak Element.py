class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        low_index = 0
        top_index = len(nums) - 1
        while low_index < top_index:
            mid = low_index + (top_index - low_index) // 2
            if nums[mid] < nums[mid + 1]:
                low_index = mid + 1
            elif nums[mid] > nums[mid + 1]:
                top_index = mid
        return low_index
