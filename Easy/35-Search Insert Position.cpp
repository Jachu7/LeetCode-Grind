class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int output = 0;
        if (target <= nums[0]) {
            output = 0;
        }
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] < target && target <= nums[i+1]) {
                output = i + 1;
                break;
            }
        }
        if (target > nums[nums.size()-1]) {
            output = nums.size();
        }
        return output;
    }
};
