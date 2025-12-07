class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_length = 0;
        int current = 0;
        bool flag = false;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1 && flag == false) {
                flag = true;
                current += 1;
                if (current > max_length) {
                    max_length = current;
                }
            }
            else if (nums[i] == 1 && flag == true) {
                current += 1;
                if (current > max_length) {
                    max_length = current;
                }
            }
            else if (nums[i] == 0 && flag == true) {
                current = 0;
                flag = false;
            }
        }
    return max_length;
    }
};
