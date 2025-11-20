class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        std::map<int, int> inNums;
        std::vector<int> output;
        for (int num: nums) {
            inNums[num]++;
            if (inNums[num] > 1) {
                output.push_back(num);
            }
        }
        return output;
    }
};
