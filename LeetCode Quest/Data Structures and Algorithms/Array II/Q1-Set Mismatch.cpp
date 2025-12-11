class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int expectedSum = (nums.size()*(nums.size()+1))/2;
        int duplicated, current;
        int actualSum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            actualSum += nums[i];
            if (i < nums.size()-1) {
                current = nums[i];
                if (current == nums[i+1]) {
                    duplicated = current;
                }
            }
        }
        int missing = expectedSum - (actualSum - duplicated);
        return {duplicated, missing};
    }
};
