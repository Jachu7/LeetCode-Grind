class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        std::vector<int> output;
        std::sort(nums.begin(), nums.end());
        int counter = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (std::binary_search(nums.begin(), nums.end(), counter)) {
                counter++;
                continue;
            }
            else {
                output.push_back(counter);
                counter++;
            }
        }
        return output;
    }
};
