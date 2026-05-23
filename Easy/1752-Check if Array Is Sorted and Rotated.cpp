class Solution {
public:
    bool check(vector<int>& nums) {       
        if (std::is_sorted(nums.begin(), nums.end())) {
            return true;
        } 
        else {
            auto drop_it = std::adjacent_find(nums.begin(), nums.end(), [](int a, int b) { return a > b; });
            if (std::is_sorted(drop_it + 1, nums.end()) && nums.back() <= nums.front()) {
                return true;
            } 
            else {
                return false;
            }
        } 
    }
};
