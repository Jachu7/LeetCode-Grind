class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum = 0;
        for (int i = 0; i < k; i++) {
            currentSum += nums[i];
        }
        double highestSum = currentSum;

        for (int i = k; i < nums.size(); i++) {
            currentSum += nums[i];
            currentSum -= nums[i - k];
            if (currentSum > highestSum) {
                highestSum = currentSum;
            }
        }
        return highestSum / k;
    }
};
