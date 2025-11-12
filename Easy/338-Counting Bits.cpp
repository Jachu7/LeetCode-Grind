class Solution {
public:
    int int_to_bin_sum(int number) {
        int result = 0;
        while (number > 0) {
            if (number % 2 == 0) {
                number = number / 2;

            }
            else {
                result++;
                number = number / 2;
            }
        }
        return result;
    }
    vector<int> countBits(int n) {
        vector<int> output;
        for (int i = 0; i <= n; i++) {
            output.push_back(int_to_bin_sum(i));
        }
        return output;
    }
};
