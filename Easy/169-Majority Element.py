class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        num = 0
        num_max = 0
        counter = 0
        counter_max = 0

        if len(nums) == 1:
            return nums[0]

        for i in range(len(nums)):
            if num != nums[i]:
                num = nums[i]
                if counter > counter_max:
                    counter_max = counter
                    num_max = num
                counter = 1
            else:
                counter += 1
                if counter > counter_max:
                    counter_max = counter
                    num_max = num
        return num_max
