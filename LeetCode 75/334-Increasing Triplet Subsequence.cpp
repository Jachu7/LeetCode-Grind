class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = std::numeric_limits<int>::max();
        int second = std::numeric_limits<int>::max();
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < first) {
                first = nums[i];
            } else if (nums[i] < second && nums[i] != first) {
                second = nums[i];
            }

            if (nums[i] > second && nums[i] > first) {
                return true;
                break;
            }
        }
        return false;
    }
};
