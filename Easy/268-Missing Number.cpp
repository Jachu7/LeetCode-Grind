class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int w;
        for (int i = 0; i < nums.size() + 1; i++) {
            if (count(nums.begin(), nums.end(), i) > 0 ) {
                continue;
            }
            else {
                w = i;
                break;
            }
        }
        return w;
    }
};
