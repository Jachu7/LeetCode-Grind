class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int diff = 0;
        std::sort(std::begin(arr), std::end(arr));
        diff = arr[1] - arr[0];
        for (int i = 0; i < arr.size()-1; ++i) {
            if (arr[i+1] - arr[i] != diff) {
                return false;
            }
        }
        return true;
    }
};
