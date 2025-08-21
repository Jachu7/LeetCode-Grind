class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ostatnia = nums[-1] + 1 #non decreasing abuse lmao (if whole nums contains only one value)
        for i in range(len(nums)):
            if nums[i] != ostatnia:
                ostatnia = nums[i]
            else:
                nums[i] = "_"

        while "_" in nums: nums.remove("_")
        return len(nums)
