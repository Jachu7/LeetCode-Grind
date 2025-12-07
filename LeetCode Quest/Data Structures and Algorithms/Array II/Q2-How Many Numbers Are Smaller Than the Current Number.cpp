class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        std::vector<int> output;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum = 0;
            for(int j = 0; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    sum += 1;
                }
            }
            output.push_back(sum);
        }
        return output;
    }
};
