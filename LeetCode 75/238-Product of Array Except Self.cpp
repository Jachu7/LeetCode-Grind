class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftProd = 1;
        int rightProd = 1;
        std::vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            result.push_back(leftProd);
            leftProd *= nums[i];
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            result[i] *= rightProd;
            rightProd *= nums[i];
        }
        return result;
    }
};
