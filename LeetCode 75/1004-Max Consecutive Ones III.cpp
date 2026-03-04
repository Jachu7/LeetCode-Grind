class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int L = 0;
        int R = 0;
        int zeroCount = 0;
        int output = 0;

        while ( R <= nums.size() - 1) {
            if (nums[R] == 0) {
                zeroCount++;
            }
            while (zeroCount > k) {
                if (nums[L] == 0) {
                    zeroCount--;
                }
                L++;
            }
            if (output < R - L + 1) {
                output = R - L + 1;
            }
            R++;
        }
        return output;
    }
};
