class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());
        int outputCounter = 0;
        int i = 0;
        int j = nums.size() - 1;
        int currentSum = 0;

        while (i < j) {
            currentSum = nums[i] + nums[j];
            if (currentSum == k) {
                outputCounter++;
                i++;
                j--;
            }
            if (currentSum < k) {
                i++;
            }
            if (currentSum > k) {
                j--;
            }
        }
        return outputCounter;
    }
};
